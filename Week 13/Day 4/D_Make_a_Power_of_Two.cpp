#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, vector<ll>&v, string st)
{
    ll ans = 1e9;
    ll siz = st.size();

    for(ll i=0; i<v.size(); i++)
    {
        ll num = v[i];
        string tmp = to_string(num);

        ll siz1 = tmp.size();
        ll res = 0LL;

        ll l=0,r=0;

        while(l < siz && r < siz1)
        {
            if(st[l] == tmp[r])
            {
                l++;
                r++;
            }
            else
            {
                res++;
                l++;
            }
        }

        if(l == siz && r != siz1) res += siz1-r;
        else if(l != siz && r == siz1) res += siz - l;

        ans = min(ans,res);
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

        if((n & (n-1)) == 0) cout << 0 << endl;
        else
        {
            vector<ll> v;
            for(ll i=0; i<=60; i++)
            {
                ll num = (1LL << i);
                v.push_back(num);
            }

            string st = to_string(n);

            cout << solve(n,v,st) << endl;
        }
    }

    return 0;
}
