#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, string st)
{
    ll ans = n-1;

    for(ll i=0; i<n; i++)
    {
        if(st[i] == 'B') ans--;
        else break;
    }

    for(ll i=n-1; i>=0; i--)
    {
        if(st[i] == 'A') ans--;
        else break;
    }

    if(ans > 0) return ans;
    return 0;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        string st;
        cin >> n >> st;

        cout << solve(n,st) << endl;
    }

    return 0;
}