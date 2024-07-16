#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

string solve(ll n, string st)
{
    string ans;

    if(st[0] != '9')
    {
        for(ll i=0; i<n; i++)
        {
            ll x = st[i]-'0';
            ll y = 9 - x;
            ans += (y+'0');
        }
    }
    else 
    {
        ll num = 0;
        for(ll i=n-1; i>=0; i--)
        {
            ll x = st[i]-'0';

            x += num;

            if(x > 1)
            {
                ll y = 11 - x;
                num = 1;
                ans += (y+'0');
            }
            else 
            {
                num = 0;
                ll y = 1 - x;
                ans += (y+'0');
            }
        }

        reverse(ans.begin(),ans.end());
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
        string st;
        cin >> st;

        cout << solve(n,st) << endl;
    }

    return 0;
}

