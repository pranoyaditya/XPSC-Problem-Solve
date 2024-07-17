#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, ll arr[])
{
    ll ans = INT_MIN;
    map<ll,ll> freq;

    for(ll i=0; i<n; i++)
    {
        for(ll j=i+1; j<n; j++)
        {
            freq[arr[i] + arr[j]]++;
            ans = max(ans,freq[arr[i]+arr[j]]);
        }
    }

    return ans;
}

int main()
{
    
    
    ll n;
    cin >> n;

    ll arr[n];

    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << solve(n,arr) << endl;
    
    return 0;
}
