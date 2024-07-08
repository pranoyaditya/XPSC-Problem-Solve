#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, ll k, string st)
{
    ll ans = 0,val=0, seg = 2*k+1;

    if(st[0] == '0')
    {
        for(ll i=0; i<=min(n-1,k); i++)
        {
            ans += (st[i]-'0');
        }

        if(ans == 0)
        {
            val++;
            st[0] = '1';
        }
    }

    ans = 0;
    if(st[n-1] == '0')
    {
        for(ll i=n-1; i>=max(n-1-k,0LL); i--)
        {
            ans += (st[i]-'0');
        }
        if(ans == 0)
        {
            val++;
            st[n-1] = '1';
        }
    }

    ans = 0;
    for(ll i=0; i<n; i++)
    {
        ans += (st[i] - '0');

        if(i >= seg-1)
        {
            if(ans == 0)
            {
                val++;
                st[i-k] = '1';
                ans++;
            }
            if(st[i-seg+1] == '1') ans--;
        }
    }

    return val;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,k;
        cin >> n >> k;

        string st;
        cin >> st;

        cout << solve(n,k,st) << endl;
    }

    return 0;
}