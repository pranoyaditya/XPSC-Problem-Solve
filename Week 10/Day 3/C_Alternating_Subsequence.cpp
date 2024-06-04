#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

bool sign(ll num)
{
    return num > 0;
}

ll solve(ll n, ll arr[])
{
    ll ans = 0;

    for(ll i=0; i<n; i++)
    {
        ll j=i;

        ll maxi = arr[i];

        while(j<n && sign(arr[j]) == sign(arr[i]))
        {
            maxi = max(maxi,arr[j]);
            j++;
        }

        i = j-1LL;

        ans += maxi;
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

        ll arr[n];
        for(ll i=0; i<n; i++) cin >> arr[i];

        cout << solve(n,arr) << "\n";
    }

    return 0;
}