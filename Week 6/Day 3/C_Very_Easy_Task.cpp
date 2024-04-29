#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool valid(ll mid, ll n, ll x, ll y)
{
    if(mid < min(x,y)) return false;

    ll cnt = 1;
    mid -= min(x,y);

   cnt += mid/x+mid/y;

    return cnt >= n;
}

ll solve(ll n, ll x, ll y)
{
    ll l=0,r=max(x,y)*n,ans;

    while(l <= r)
    {
        ll mid = l+(r-l)/2;

        if(valid(mid,n,x,y))
        {
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }

    return ans;
}

int main()
{
    ll n,x,y;
    cin >> n >> x >> y;

    cout << solve(n,x,y) << "\n";

    return 0;
}