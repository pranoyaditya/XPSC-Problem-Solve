#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, ll sum, vector<ll>&v)
{
    ll ans = 0, add= 0;

    for(ll i=0; i<n; i++)
    {
        if(i%2 == 0)
        {
            if(v[i] > 0)
            {
                add = max(add,sum);
            }
            else 
            {
                add = max(add,sum+v[i]);
            }
        }
        else
        {
            if(v[i] > 0)
            {
                sum -= v[i];
                add = max(add,sum);
            }
            else
            {
                add = max(add,sum);
            }
        }
    }

    ans += add;

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

        vector<ll> v(n);
        ll sum = 0;

        for(ll i=0; i<n; i++)
        {
            cin >> v[i];

            if(v[i] > -1) sum += v[i];
        }

        cout << solve(n,sum,v) << endl;
    }

    return 0;
}
