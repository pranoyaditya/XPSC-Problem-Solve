#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n)
{
    ll start = 2;
    ll end = 10000000000LL;
    ll ans = end;

    ll mid = (start+end)/2;

    while(start <= end)
    {
        ll cur = (mid * (mid-1)) / 2;

        if(cur >= n)
        {
            if(ans > mid)
            {
                ans = mid;
            }
            end = mid - 1;
        }
        else 
        {
            start = mid + 1;
        }

        mid = (start+end)/2;
    }

    ll now = ans * (ans-1)/2;

    if(now == n) return ans;

    ans--;
    ll val = ans;
    now = (ans * (ans - 1)) / 2;
    val += (n - now);

    return val;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        cout << solve(n) << endl;
    }

    return 0;
}

