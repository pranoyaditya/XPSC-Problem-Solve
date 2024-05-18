#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n,  ll arr[])
{

    ll gcd=arr[0];

    for(ll i=2; i<n; i+=2)
    {
        gcd = __gcd(gcd,arr[i]);
    }

    bool ok = true;
    for(ll i=1; i<n; i+=2)
    {
        if(arr[i]%gcd == 0) 
        {
            ok = false;
            break;
        }
    }

    if(ok) return gcd;

    ok = true;
    gcd = arr[1];
    for(ll i=3; i<n; i+=2)
    {
        gcd = __gcd(gcd,arr[i]);
    }

    for(ll i=0; i<n; i+=2)
    {
        if(arr[i] % gcd == 0)
        {
            ok = false;
            break;
        }
    }

    if(ok) return gcd;
    return 0;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll arr[n],maxi=INT_MIN;
        for(ll i=0; i<n; i++) 
        {
            cin >> arr[i];
            maxi = max(maxi,arr[i]);
        }


        cout << solve(n,arr) << endl;
    }

    return 0;
}