#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
using namespace __gnu_pbds;
using namespace std;

template<typename T> using pbds = tree<T,null_type,greater_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;


ll solve(ll n)
{
    pbds<ll> p;
    ll arr[n];

    ll ans = 0;

    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    map<ll,ll>mp;

    for(ll i=0; i<n; i++)
    {
        p.insert(arr[i]);

        ans += p.order_of_key(arr[i]) + mp[arr[i]];
        mp[arr[i]]++;
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

        cout << solve(n) << endl;
    }

    return 0;
}