#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, vector<ll>&v)
{
    ll mini = INT_MAX,ans;

    for(auto val : v)
    {
        mini = min(mini,val);
    }

    for(ll i=0; i<n; i++)
    {
        if(v[i] == mini)
        {
            ans = i;
            break;
        }
    }

    if(is_sorted(v.begin()+ans, v.end())) return ans;
    return -1;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;
        
        vector<ll>v(n);
        for(ll i=0; i<n; i++)
        {
            cin >> v[i];
        }

        cout << solve(n,v) << endl;
    }

    return 0;
}

