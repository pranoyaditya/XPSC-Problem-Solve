#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

void solve(ll n, ll k)
{
    vector<ll> ans(n+1);

    ll p = 1, q = n;

    for(ll i=1; i<=k; i++)
    {
        for(ll j=i; j<=n; j += k)
        {
            if(i & 1) ans[j] = p++;
            else ans[j] = q--;
        }

    }

    for(ll i=1; i<=n; i++) cout << ans[i] << " ";
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,k;
        cin >> n >> k;

        solve(n,k);
    }

    return 0;
}
