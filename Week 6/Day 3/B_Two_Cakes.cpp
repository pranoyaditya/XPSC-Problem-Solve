#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool valid(ll mid, ll a, ll b, ll n)
{
    ll pl_a = a/mid;
    ll pl_b = b/mid;

    return pl_a + pl_b >= n && pl_a >=1 && pl_b >= 1;
}


int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
   
    if (n > 2)
    {
        ll l = 1;
        ll r = 100;
        ll ans;
        while (l <= r)
        {
            ll mid = l+(r-l)/2;

            if (valid(mid,a,b,n))
            {
                l = mid + 1;
                ans = mid;
            }
            else
                r = mid - 1;
        
        }
        cout << ans << "\n";
    }
    else cout << min(a, b) << "\n";

    return 0;
}