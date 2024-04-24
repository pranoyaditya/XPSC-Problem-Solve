#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll m, string a, string b)
{
    ll dp[n+1][m+1];

    for(ll i=0; i<=n; i++)
    {
        for(ll j=0; j<=m; j++) dp[i][j] = 0;
    }

    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=m; j++)
        {
            if(a[i-1] == b[j-1])
            {
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else dp[i][j] = 0;
        }
    }

    ll mx = 0;

    for(ll i=0; i<=n; i++)
    {
        for(ll j=0; j<=m; j++)
        {
            mx = max(dp[i][j],mx);
        }
    }

    ll res = 0;

    res += (n-mx);
    res += (m-mx);

    return res;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        string a,b;
        cin >> a >> b;

        ll n = a.size(),m = b.size();

        cout << solve(n,m,a,b) << "\n";

    }

    return 0;
}