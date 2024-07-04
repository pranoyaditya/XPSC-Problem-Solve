#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, string st, vector<ll>adj[])
{
    ll cnt = 0;
    queue<pair<ll,ll>> q;
    q.push({1,0});

    ll ans = 1e9;

    while(!q.empty())
    {
        ll node = q.front().first;
        ll dis = q.front().second;

        q.pop();

        ll left = adj[node][0];
        ll right = adj[node][1];

        if(left == 0 && right == 0)
        {
            ans = min(ans,dis);
        }
        if(left != 0)
        {
            if(st[node-1] == 'L' ) q.push({left,dis});
            else q.push({left,dis+1});
        }
        if(right != 0)
        {
            if(st[node-1] == 'R') q.push({right, dis});
            else q.push({right,dis+1});
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

        vector<ll> adj[n+1];

        for(ll i=1; i<=n; i++)
        {
            ll a,b;
            cin >> a >> b;

            adj[i].push_back(a);
            adj[i].push_back(b);
        }

        cout << solve(n,st,adj) << endl;
    }

    return 0;
}
