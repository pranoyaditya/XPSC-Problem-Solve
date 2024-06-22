#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, vector<vector<ll>>&v, set<ll>&st)
{
    if(n == 1) return 0;

    ll ans = 0;

    vector<ll> final;
    final.assign(st.begin(),st.end());

    for(ll i=0; i<final.size(); i++)
    {
        ll val = final[i];
        set<ll> tmp;

        for(ll j=0; j<v.size(); j++)
        {
            bool present = false;

            for(auto digit : v[j])
            {
                if(val == digit)
                {
                    present = true;
                    break;
                }
            }

            if(!present)
            {
                for(auto digit : v[j])
                {
                    tmp.insert(digit);
                }
            }
        }

        ans = max(ans, (ll)tmp.size());
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

        vector<vector<ll>> v(n);
        set<ll> st;
        

        for(ll i=0; i<n; i++)
        {
            ll s;
            cin >> s;

            for(ll j=0; j<s; j++)
            {
                ll x;
                cin >> x;
                v[i].push_back(x);
                st.insert(x);
            }
        }

        cout << solve(n,v,st) << endl;
    }

    return 0;
}