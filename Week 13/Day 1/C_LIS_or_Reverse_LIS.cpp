#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, map<ll,ll>&mp)
{
    ll currentFreq = 0LL,cnt=0LL;

    for(auto val : mp)
    {
        ll num = val.first;
        ll freq = val.second;

        if(freq == 1) currentFreq++;
        else cnt++;
    }

    return (currentFreq+1)/2+cnt;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        map<ll,ll>mp;

        for(ll i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }

        cout << solve(n,mp) << endl;
    }

    return 0;
}