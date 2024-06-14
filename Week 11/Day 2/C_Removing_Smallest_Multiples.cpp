#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, string st)
{
    ll visited[n+1] = {0};

    for(ll i=1; i<=n; i++) if(st[i] == '1') visited[i] = 2;

    ll ans = 0;

    for(ll i=1; i<=n; i++)
    {
        for(ll j=i; j<=n; j+=i)
        {
            if(visited[j] == 0)
            {
                visited[j] = true;
                ans += i;
            }
            else if(visited[j] == 2) break;
        }
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

        st = "@"+st;

        cout << solve(n,st) << endl;
    }

    return 0;
}