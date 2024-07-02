#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(string a, string b)
{
    ll ans = a.size()+b.size();

    ll n = a.size(),m = b.size();

    for(ll i=0; i<m; i++)
    {
        ll point = i;

        for(ll j=0; j<n; j++)
        {
            if(point < m && a[j] == b[point]) point++;
        }

        ans = min(ans,n+m-point+i);
    }

    return ans;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        string a,b;
        cin >> a >> b;

        cout << solve(a,b) << endl;
    }

    return 0;
}