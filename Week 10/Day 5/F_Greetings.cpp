#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
using namespace __gnu_pbds;
using namespace std;

template<typename T> using pbds = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

ll solve(ll n, vector<pair<ll,ll>>&v)
{
    ll ans = 0;

    pbds<pair<ll,ll>> p;

    sort(v.begin(),v.end());

    for(ll i=0; i<n; i++)
    {
        p.insert({v[i].second,i});
    }

    for(ll i=0; i<n; i++)
    {
        ans += p.order_of_key({v[i].second,i});
        p.erase({v[i].second,i});
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

        vector<pair<ll,ll>> v(n);
        
        for(ll i=0; i<n; i++)
        {
            cin >> v[i].first >> v[i].second;
        }

        cout << solve(n,v) << endl;
    }

    return 0;
}