#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
using namespace __gnu_pbds;
using namespace std;

template<typename T> using pbds = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;

void solve(ll n, ll k, ll arr[], set<ll>&st)
{
    vector<ll>ans;
    ll l=0,r=0;

    if(st.size() == 1)
    {
        while(r<n)
        {
            if(r-l+1 == k)
            {
                ans.push_back(0);
                l++;
            }
            r++;
        }
    }
    else
    {
        pbds<ll> p;
    
        for(ll i=0; i<k; i++)
        {
            p.insert(arr[i]);
        }

        ll oldMid = *p.find_by_order((k+1)/2-1);

        ll cnt = 0;

        for(ll i=0; i<k; i++)
        {
            cnt += abs(arr[i]-oldMid);
        }

        ans.push_back(cnt);

        for(ll i=0; i<n-k; i++)
        {
            p.erase(p.find_by_order(p.order_of_key(arr[i])));
            p.insert(arr[i+k]);
            ll mid = *p.find_by_order((k+1)/2-1);
            cnt = cnt + abs(mid - arr[i+k]) - abs(oldMid - arr[i]);

            if(k%2==0) cnt -= (mid - oldMid);
            oldMid = mid;
            ans.push_back(cnt);
        }
    }


    for(auto val : ans) cout << val << " ";
    cout << endl;
}

int main()
{
    ll n,k;
    cin >> n >> k;

    ll arr[n];
    set<ll>st;
    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
        st.insert(arr[i]);
    }


    solve(n,k,arr,st);

    return 0;
}