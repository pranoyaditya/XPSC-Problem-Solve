#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll removePrefix(ll n, ll arr[])
{
    ll cnt = 0;
    map<ll,ll> mp;

    for(ll i=n-1; i>=0; i--)
    {
        mp[arr[i]]++;
        if(mp[arr[i]] > 1) break;
        cnt++;
    }

    return n-cnt;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll arr[n];

        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        cout << removePrefix(n,arr) << endl;
    }

    return 0;
}