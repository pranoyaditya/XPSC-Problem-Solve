#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

void solve(ll n, ll arr[])
{
    ll x=0,y=1;

    ll diff = abs(arr[y]-arr[x]);
    for(ll i=1; i<n-1; i++)
    {
        if(arr[i+1] - arr[i] < diff)
        {
            diff = abs(arr[i+1] - arr[i]);
            x = i;
            y = i+1;
        }
    }

    cout << arr[x] << " ";

    for(ll i=y+1; i<n; i++) cout << arr[i] << " ";
    for(ll i=0; i<x; i++) cout << arr[i] << " ";

    cout << arr[y] << "\n";

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

        for(ll i=0; i<n; i++) cin >> arr[i];

        sort(arr,arr+n);

        solve(n,arr);

    }

    return 0;
}
