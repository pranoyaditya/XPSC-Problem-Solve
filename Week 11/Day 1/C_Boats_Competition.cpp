#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, map<ll,ll>&mp)
{
    ll ans = 0;

    for(ll i=1; i<=n*2; i++)
    {
        ll total = 0;
        for(auto j : mp)
        {
            ll target = i - j.first;

            if(target >= 1 && mp.count(target))
            {
                total += min(j.second,mp[target]);
            }
        }

        total /= 2;

        ans = max(ans,total);
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