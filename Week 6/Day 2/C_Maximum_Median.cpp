#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool possible(ll num, ll n, ll arr[], ll op)
{
    ll cost = 0;

    for(ll i=n/2; i<n; i++)
    {
        if(arr[i] < num)
        {
            cost += (num-arr[i]);

            if(cost > op) return false;
        }
    }

    return true;
}

ll solve(ll n, ll op, ll arr[])
{
    ll l=arr[n/2],r = arr[n-1]+op,ans;

    while(l<=r)
    {
        ll mid = l+(r-l)/2;

        if(possible(mid,n,arr,op))
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
    ll n,op;
    cin >> n >> op;

    ll arr[n];
    for(ll i=0; i<n; i++) cin >> arr[i];

    sort(arr,arr+n);

    cout << solve(n,op,arr) << "\n";


    return 0;
}