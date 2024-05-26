#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll x, vector<ll>&val)
{
    ll sum = 0;
    map<ll,ll> seen;

    seen[0]++;
    ll ans = 0LL;

    for(ll i=0LL; i<n; i++)
    {
        sum += val[i];
        ans += seen[sum-x];
        seen[sum]++;
    }

    return ans;
}

int main()
{
    ll n,x;
    cin >> n >> x;

    vector<ll> val(n);
    for(ll i=0LL; i<n; i++) cin >> val[i];

    cout << solve(n,x,val) << endl;

    return 0;
}