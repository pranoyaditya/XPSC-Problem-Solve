#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll minimumXOR(ll n, ll totalXor, ll arr[])
{
    ll ans = totalXor;

    for(ll i=0; i<n; i++)
    {
        ans = min(ans,(totalXor^arr[i]));
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

        ll arr[n],totalXor=0;

        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
            totalXor ^= arr[i];
        }

        cout << minimumXOR(n,totalXor,arr) << endl;
    }

    return 0;
}