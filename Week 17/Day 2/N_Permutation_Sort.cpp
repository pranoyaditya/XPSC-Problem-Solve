#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, ll arr[])
{
    bool ascendingSorted = true;
    bool descendingSorted = true;

    for(ll i=0; i<n; i++) 
    {
        if(i+1 != arr[i])
        {
            ascendingSorted = false;
            break;
        }
    }

    for(ll i=0; i<n-1; i++) 
    {
        if(arr[i+1] > arr[i])
        {
            descendingSorted = false;
            break;
        }
    }

    if(ascendingSorted) return 0;
    else if(descendingSorted) return 3;
    else if(arr[n-1] == n || arr[0] == 1) return 1;
    else if(arr[0] == n && arr[n-1] == 1) return 3;

    return 2;
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

        cout << solve(n,arr) << endl;
    }

    return 0;
}