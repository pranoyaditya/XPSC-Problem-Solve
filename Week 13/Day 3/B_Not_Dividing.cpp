#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

void solve(ll n, ll arr[])
{
    for(ll i=0; i<n-1; )
    {
        if(arr[i] != 1)
        {
            if(arr[i+1]%arr[i] == 0) arr[i+1]++;
            i++;
        }
        else if(i == 0) arr[i]++;
        else
        {
            if(arr[i-1] > 2) arr[i]++;
            else arr[i] = arr[i-1]+1;
        }
    }

    for(ll i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
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

        solve(n,arr);
    }

    return 0;
}