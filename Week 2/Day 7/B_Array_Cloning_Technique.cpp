#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n)
{
    map<ll,ll> mp;

    for(ll i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }

    ll mxFreq = 0;

    for(auto val : mp)
    {
        mxFreq = max(mxFreq,val.second);
    }

    ll ans = 0;
    while(mxFreq < n)
    {
        ll rem = (n-mxFreq);
        ll add = mxFreq;
        ll req = min(rem,add);
        ans += (1+req);
        mxFreq += min(add,rem);
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

        cout << solve(n) << "\n";
    }


    return 0;
}