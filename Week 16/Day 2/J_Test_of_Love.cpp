#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

string solve(ll n, ll m, ll k, string st)
{
    ll curr = 0;
    bool reached = true;

    while(true)
    {
        for(ll i=1; i<m+1; i++)
        {
            curr++;

            if(st[curr-1] == 'L') break;
        }

        if(curr >= n+1) break;

        if(st[curr-1] == 'L') continue;
        if(st[curr-1] == 'C')
        {
            reached = false;
            break;
        }

        while(k)
        {
            curr++;
            k--;

            if(st[curr-1] == 'L') break;
            if(st[curr-1] == 'C')
            {
                reached = false;
                break;
            }
        }

        if(st[curr-1] == 'W')
        {
            reached = false;
            break;
        }
    }

    if(reached) return "YES";
    return "NO";
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,m,k;
        cin >> n >> m >> k;

        string st;
        cin >> st;

        st += 'L';

        cout << solve(n,m,k,st) << endl;
    }

    return 0;
}
