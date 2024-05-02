#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool valid(ll mid, ll n, ll m, vector<tuple<ll,ll,ll>>&v, vector<ll>&can)
{
    vector<ll>may(n);
    ll has = m;

    for(ll i=0; i<n; i++)
    {
        tuple<ll,ll,ll> T = v[i];
        ll t = get<0>(T);
        ll z = get<1>(T);
        ll y = get<2>(T);

        ll total = (t*z)+y;
        ll can = mid/total;
        ll remaining = mid%total;

        ll curr = can*z + min(z,(remaining/t));
        curr = min(has,curr);
        has -= curr;
        may[i] = curr;

    }

    if(!has)
    {
        for(ll i=0; i<n; i++)
        {
            can[i] = may[i];
        }
    }

    return (!has);
}

void solve(ll n, ll m, vector<tuple<ll,ll,ll>>&v)
{
    ll l=0,r=1e8,ans;
    vector<ll>can(n);

    while(l<=r)
    {
        ll mid = l+(r-l)/2;

        if(valid(mid,n,m,v,can))
        {
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }

    cout << ans << "\n";
    for(auto val : can) cout << val << " ";
}

int main()
{   
    ll n,m;
    cin >> m >> n;

    vector<tuple<ll,ll,ll>> v(n);

    for(ll i=0; i<n; i++)
    {
        ll t,z,y;
        cin >> t >> z >> y;

        v[i] = make_tuple(t,z,y);
    }


    solve(n,m,v);

    return 0;
}