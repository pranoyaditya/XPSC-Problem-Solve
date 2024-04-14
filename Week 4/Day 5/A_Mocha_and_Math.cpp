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

        ll ans,arr[n];

        for(ll i=0; i<n; i++) cin >> arr[i];

        ans = arr[0];

        for(ll i=1; i<n; i++) ans &= arr[i];

        cout << ans << endl;
    }

    return 0;
}