#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n)
{
    ll maxi = -1;

    for(ll i=0; i<n; i++)
    {
        ll x;
        cin >> x;

        if(x > maxi + 1)
        {
            return i+1;
        }

        maxi = max(maxi,x);
    }

    return -1;
}

int main()
{
    ll n;
    cin >> n;

    cout << solve(n) << endl;

    return 0;
}
