#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll a, ll b, ll k)
{
    set<ll> ans;
    ll val1 = 1LL;

    for(ll x=0; x<20 && val1<=k; x++)
    {
        ll val2 = 1LL;

        for(ll y=0; y<20 && val1*val2 <=k; y++)
        {
            if(k % (val1*val2) == 0)
            {
                ans.insert(k / (val1*val2));
                val2 *= b;
            }
        }

        val1 *= a;
    }

    return ans.size();
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll a,b,k;
        cin >> a >> b >> k;

        cout << solve(a,b,k) << "\n";
    }

    return 0;
}