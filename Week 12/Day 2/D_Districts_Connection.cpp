#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

void solve(ll n, set<ll>&st, map<ll,vector<ll>>&v)
{
    if(st.size() == 1)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    vector<vector<ll>> other;

    for(auto val : v)
    {
        other.push_back(val.second);
    }

    for(ll i=1; i<other.size(); i++)
    {
        for(auto j : other[i])
        {
            cout << other[0][0]+1 << " " << j+1 << "\n";
        }
    }

    for(ll i=1; i<other[0].size(); i++)
    {
        cout << other[0][i]+1 << " " << other[1][0]+1 << "\n";
    }

    return;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        set<ll> st;
        map<ll,vector<ll>> v;

        for(ll i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            st.insert(x);
            v[x].push_back(i);
        }

        solve(n,st,v);
    }

    return 0;
}
