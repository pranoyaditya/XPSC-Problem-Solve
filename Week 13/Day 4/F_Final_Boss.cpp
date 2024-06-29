#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;
const ll INF = 1e11;

ll solve(ll n, ll h, ll arr1[], ll arr2[])
{
    ll l = 0LL, r = INF;

    while(r-l > 1)
    {
        ll mid = l+(r-l)/2;

        ll sum = 0LL;

        for(ll i=0; i<n; i++)
        {
            sum = min(h, sum+( (mid + arr2[i] -1) / arr2[i]) * arr1[i]);
        }

        if(sum == h) r = mid;
        else l = mid;
    }

    return r;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll h,n;
        cin >> h >> n;

        ll arr1[n],arr2[n];

        for(ll i=0; i<n; i++) cin >> arr1[i];
        for(ll i=0; i<n; i++) cin >> arr2[i];

        cout << solve(n,h,arr1,arr2) << endl;
    }

    return 0;
}

