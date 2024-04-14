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

        ll andi,ori=0,arr[n];

        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
            ori |= arr[i];
        }

        andi = arr[0];

        for(ll i=1; i<n; i++)
        {
            andi &= arr[i];
        }

        cout << (ori-andi) << endl;

    }

    return 0;
}