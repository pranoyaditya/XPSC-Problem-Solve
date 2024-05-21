#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll arr[])
{
    ll ans =0,maxi = arr[0];

    for(ll i=1; i<n; i++)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
        else ans += (maxi-arr[i]);
    }

    return ans;
}

int main()
{
    ll n;
    cin >> n;

    ll arr[n];
    for(ll i=0; i<n; i++) cin >> arr[i];

    cout << solve(n,arr) << endl;

    return 0;
}