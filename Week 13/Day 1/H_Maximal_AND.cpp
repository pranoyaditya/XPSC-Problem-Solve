#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, ll k, vector<ll>&arr, vector<bitset<31>>&v)
{
    ll ans = 0LL;

    for(ll i=30; i>=0; i--)
    {
        ll req = 0LL;

        for(ll j=0; j<n; j++)
        {
            req += (v[j][i] == 0);
        }

        if(req <= k)
        {
            k -= req;
            ans += (1 << i);
        }
    }

    return ans;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,k;
        cin >> n >> k;

        vector<ll>arr(n);
        vector<bitset<31>> v(n);

        for(ll i=0; i<n; i++) cin >> arr[i];

        for(ll i=0; i<n; i++)
        {
            bitset<31> tmp(arr[i]);
            v[i] = tmp;
        }

        cout << solve(n,k,arr,v) << endl;
    }

    return 0;
}