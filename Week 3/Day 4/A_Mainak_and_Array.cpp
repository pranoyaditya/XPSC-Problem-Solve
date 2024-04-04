#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll arr[])
{
    ll ans = 0;
    
    for(ll i=1; i<n; i++)
    {
        ans = max(ans,arr[i]-arr[0]);
    }

    for(ll i=0; i<n-1; i++)
    {
        ans = max(ans,arr[n-1]-arr[i]);
    }

    for(ll i=1; i<n; i++)
    {
        ans = max(ans,arr[i-1]-arr[i]);
    }

    ans = max(ans,arr[n-1]-arr[0]);

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

        ll arr[n];

        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        cout << solve(n,arr) << endl;
    }


    return 0;
}