#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, string a)
{
    ll ans = 0;

    for(ll i=0; i<n; i++)
    {
        if(i == 0) ans++;
        else if(a[i] == a[i-1]) ans++;
        else ans += i+1;
    }

    return ans;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        string a;
        ll n;

        cin >> n >> a;

        cout << solve(n,a) << endl;
    }

    return 0;
}