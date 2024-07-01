#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll x, ll y , ll k)
{
    while(k > 0 && x > 1)
    {
        ll rem = y-(x%y);

        if(rem >= k)
        {
            x += k;
            k = 0;
        }
        else 
        {
            x += rem;
            k -= rem;
        }

        while(x%y == 0)
        {
            x /= y;
        }
    }

    if(k > 0)
    {
        x += (k%(y-1));
    }

    return x;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll x,y,k;
        cin >> x >> y >> k;

        cout << solve(x,y,k) << endl;
    }

    return 0;
}