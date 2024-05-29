#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
using namespace __gnu_pbds;
using namespace std;

template<typename T> using pbds = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

ll solve(ll n, ll arr[], pbds<pair<ll,ll>>&p)
{
    ll ans = 0;

    for(ll i=0; i<n; i++)
    {
        ans += p.order_of_key({arr[i],i});
        p.erase({arr[i],i});
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

        pbds<pair<ll,ll>>p;
        ll arr[n];

        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
            p.insert({arr[i],i});
        }

        cout << solve(n,arr,p) << endl;
    }

    return 0;
}