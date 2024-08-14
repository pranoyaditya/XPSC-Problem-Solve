#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        vector<ll> v(1001,0);
        ll n;
        cin >> n;

        ll maxi = -1;

        for(ll i=1; i<=n; i++)
        {
            ll x;
            cin >> x;
            v[x] = i;
        }

        for(ll i=1; i<=1000; i++)
        {
            for(ll j=1; j<=1000; j++)
            {
                if(v[i] && v[j] && __gcd(i,j) == 1) maxi = max(maxi,v[i]+v[j]);
            }
        }

        cout << maxi << endl;
    }

    return 0;
}
