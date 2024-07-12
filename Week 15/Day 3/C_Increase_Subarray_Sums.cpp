#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

void solve(ll n, ll x, ll arr[])
{
    vector<ll> ans(n+1, INT_MIN);
    ans[0] = 0;

    for(ll i=0; i<n; i++)
    {
        ll tmp = 0;
        
        for(ll j=i; j<n; j++)
        {
            tmp += arr[j];
            ans[j-i+1] = max(ans[j-i+1],tmp);
        }
    }

    for(ll i=0; i<=n; i++)
    {
        ll ans1 = 0;

        for(ll j=0; j<=n; j++)
        {
            ans1 = max(ans1,min(j,i)*x+ans[j]);
        }

        cout << ans1 << " ";
    }

    cout << endl;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,x;
        cin >> n >> x;

        ll arr[n];
        for(ll i=0; i<n; i++) cin >> arr[i];

        solve(n,x,arr);
    }

    return 0;
}