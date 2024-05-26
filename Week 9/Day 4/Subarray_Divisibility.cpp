#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, vector<ll>&val)
{
    ll sum = 0LL;
    map<ll,ll> seen;

    seen[0]++;

    ll ans = 0LL;

    for(ll i=0; i<n; i++)
    {
        sum += val[i]%n;
        sum = (sum+n)%n;
        ans += seen[sum];
        seen[sum]++;
    }

    return ans;
}

int main()
{
    ll n;
    cin >> n;

    vector<ll>val(n);
    for(ll i=0; i<n; i++) cin >> val[i];

    cout << solve(n,val) << endl;

    return 0;
}