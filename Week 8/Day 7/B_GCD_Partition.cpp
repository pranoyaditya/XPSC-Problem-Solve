#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll prefix[], ll suffix[])
{
    ll ans = 1;

    for(ll i=0LL; i<n-1; i++)
    {
        ans = max(ans, __gcd(prefix[i],suffix[i+1]));
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

        ll arr[n],prefix[n]={0},suffix[n]={0};
        for(ll i=0LL; i<n; i++) cin >> arr[i];

        prefix[0] = arr[0];
        suffix[n-1] = arr[n-1];

        for(ll i=1LL; i<n; i++) prefix[i] = prefix[i-1] + arr[i];

        for(ll i=n-2LL; i>=0; i--) suffix[i] = suffix[i+1] + arr[i];

        cout << solve(n,prefix,suffix) << endl;
    }

    return 0;
}