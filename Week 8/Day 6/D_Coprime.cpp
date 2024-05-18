#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, map<ll,ll>&mp, set<ll>&st)
{

    vector<ll> arr;

    for(auto val : st)
    {
        arr.push_back(val);
    }


    ll ans = -1;

    for(ll i=0; i<arr.size(); i++)
    {
        for(ll j=0; j<arr.size(); j++)
        {
            if(__gcd(arr[i],arr[j]) == 1LL)
            {
                ans = max(ans, mp[arr[i]]+mp[arr[j]]);
            }
        }
    }

    return ans;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        map<ll,ll> mp;
        set<ll> st;

        for(ll i=0; i<n; i++) 
        {
            ll x;
            cin >> x;
            st.insert(x);

            if(i+1 > mp[x])
            {
                mp[x] = i+1;
            }
        }

        cout << solve(n,mp,st) << endl;
    }

    return 0;
}