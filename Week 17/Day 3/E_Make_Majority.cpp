#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

string solve(ll n, string st)
{
    ll a=0,b=0,cur=0;

    for(ll i=0; i<=n; i++)
    {
        if(i == n || st[i] == '1')
        {
            if(cur) 
            {
                a++;
                cur = 0;
            }
        }
        if(st[i] == '1') b++;
        else cur++;
    }

    if(b > a) return "YES";
    return "NO";
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
