#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, ll m, vector<ll>&v)
{
    vector<ll> ar;
    ar.push_back(v[0]-1+ n- v[m-1]);

    for(ll i=1; i<m; i++) ar.push_back(v[i] - v[i-1]-1);

    sort(ar.begin(), ar.end(), greater<ll>());

    ll x = 1, y = 0, count = 0;

    for(ll i=0; i<ar.size(); i++)
    {
        x = count * 4;

        if(ar[i] > x) y++;
        else break;

        x += 2;
        count++;

        y += max(0LL, ar[i]-x);
    }

    return n-y;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,m;
        cin >> n >> m;

        vector<ll> v(m);
        for(ll i=0; i<m; i++) cin >> v[i];

        sort(v.begin(),v.end());

        cout << solve(n,m,v) << endl;
    }

    return 0;
}
