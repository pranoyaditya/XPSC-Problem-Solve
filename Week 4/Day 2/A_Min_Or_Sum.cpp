#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll ans = 0;

        for(ll i=0; i<n; i++)
        {
            ll x;
            cin >> x;

            ans |= x;
        }

        cout << ans << '\n';
    }

    return 0;
}