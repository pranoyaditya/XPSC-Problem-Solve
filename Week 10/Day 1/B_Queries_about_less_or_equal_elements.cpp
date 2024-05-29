#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
using namespace __gnu_pbds;
using namespace std;

template<typename T> using pbds = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;


ll solve(pbds<ll>&p, ll num)
{
    return p.order_of_key(num+1);
}

int main()
{
    ll n,m;
    cin >> n >> m;

    pbds<ll> p;
    for(ll i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        p.insert(x);
    }

    while(m--)
    {
        ll num;
        cin >> num;
        cout << solve(p,num) << " ";
    }

    return 0;
}