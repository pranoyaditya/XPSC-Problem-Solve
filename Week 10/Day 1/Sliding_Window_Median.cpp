#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
using namespace __gnu_pbds;
using namespace std;

template<typename T> using pbds = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

void solve(ll n, ll k, pbds<pair<ll,ll>>&p)
{
    ll arr[n];
    for(ll i=0; i<n; i++) cin >> arr[i];

    ll l=0,r=0;

    while(r < n)
    {
        p.insert({arr[r],r});
        if(r-l+1 == k)
        {
            ll pos = k/2;
            if(k%2==0) pos--;

            auto it = p.find_by_order(pos);
            cout << it->first << " ";
            p.erase({arr[l],l});
            l++;
        }
        
        r++;
    }

    return;
}


int main()
{
    ll n,k;
    cin >> n >> k;

    pbds<pair<ll,ll>> p;

    solve(n,k,p);

    return 0;
}