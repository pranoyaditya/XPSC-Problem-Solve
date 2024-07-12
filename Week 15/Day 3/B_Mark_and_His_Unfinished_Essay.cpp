#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

void solve(ll n, ll c, ll q, string st)
{
    vector<pair<ll,ll>> option(c),segment(c);

    ll len = n;

    for(ll i=0; i<c; i++)
    {
        ll l,r;
        cin >> l >> r;

        option[i] = {l,r};
        segment[i] = {len+1,len+(r-l+1)};

        len = segment[i].second;
    }

    while(q--)
    {
        ll k;
        cin >> k;

        if(k <= n)
        {
            cout << st[k-1] << endl;
            continue;
        }

        for(ll i=c-1; i>=0; i--)
        {
            if(k >= segment[i].first && k <= segment[i].second)
            {
                k = (option[i].first) + (k - segment[i].first);
            }
        }
        cout << st[k-1] << endl;
    }
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,c,q;
        string st;

        cin >> n >> c >> q >> st;

        solve(n,c,q,st);
    }

    return 0;
}

