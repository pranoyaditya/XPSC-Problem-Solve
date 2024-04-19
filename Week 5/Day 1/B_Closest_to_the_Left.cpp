#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll x, ll arr[])
{
    ll l=0,r=n-1,ans=-1;

    while(l<=r)
    {
        ll mid = l + (r-l)/2;

        if(arr[mid] <= x) 
        {
            ans = mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }

    return ans+1;
}

int main()
{
    ll n,q;
    cin >> n >> q;

    ll arr[n];
    
    for(ll i=0; i<n; i++) cin >> arr[i];

    while(q--)
    {
        ll x;
        cin >> x;

        cout << solve(n,x,arr) << endl;
    }

    return 0;
}