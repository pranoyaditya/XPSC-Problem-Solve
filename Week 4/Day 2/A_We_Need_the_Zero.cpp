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

            ans ^= x;
        }

        if(n%2==0)
        {
            if(ans == 0) cout << "2\n";
            else cout << "-1\n";
        }
        else cout << ans << '\n';
    }

    return 0;
}