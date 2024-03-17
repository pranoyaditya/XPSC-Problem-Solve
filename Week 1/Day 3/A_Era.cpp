#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, vector<ll>&v)
{
    ll cnt = 0;

    for(ll i=1; i<=n; i++)
    {
        if(v[i] > i)
        {
           cnt = max(cnt,v[i]-i);
        }
    }

    return cnt;
}


int main()
{   
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> v(n+1);

        for(ll i=1; i<=n; i++)
        {
            cin >> v[i];
        }

        cout << solve(n,v) << endl;
    }


    return 0;
}