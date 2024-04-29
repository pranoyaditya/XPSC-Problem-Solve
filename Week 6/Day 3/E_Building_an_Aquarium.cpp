#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll valid(ll mid, ll n, ll x, ll arr[])
{
    ll water = 0;

    for(ll i=0; i<n; i++)
    {
        if(arr[i] <= mid) water += mid-arr[i];
    }

    return water <= x;
}

ll solve(ll n, ll x, ll mini, ll arr[])
{
    ll l=1,r=x+mini,ans=1;

    while(l <= r)
    {
        ll mid = l+(r-l)/2;

        if(valid(mid,n,x,arr))
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }

    return ans;
}

int main()
{   
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,x;
        cin >> n >> x;

        ll arr[n],mini=INT_MAX;
        for(ll i=0; i<n; i++) 
        {
            cin >> arr[i];
            mini = min(mini,arr[i]);
        }

        cout << solve(n,x,mini,arr) << "\n";
    }


    return 0;
}