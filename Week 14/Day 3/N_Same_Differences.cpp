#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, ll arr[])
{
    ll ans = 0;
    map<ll,ll>mp;


    for(ll i=0; i<n; i++)
    {
        ans += mp[arr[i]-i];
        mp[arr[i]-i]++;
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

        cout << solve(n,arr) << endl;
        
    }

    return 0;
}