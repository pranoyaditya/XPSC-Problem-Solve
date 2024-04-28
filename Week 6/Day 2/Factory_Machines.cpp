#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool production(ll num, ll n, ll arr[], ll total)
{
    ll cnt = 0;

    for(ll i=0; i<n; i++)
    {
        cnt += (num/arr[i]);
        if(cnt >= total) return true;
    }

    return false;
}

ll solve(ll n, ll total, ll arr[])
{
    ll l=1,r=1e18,ans;

    while(l<=r)
    {
        ll mid = l+(r-l)/2;

        if(production(mid,n,arr,total))
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
    ll n,total;
    cin >> n >> total;

    ll arr[n];
    for(ll i=0; i<n; i++) cin >> arr[i];

    cout << solve(n,total,arr) << "\n";

    return 0;
}