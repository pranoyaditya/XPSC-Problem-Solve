#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool valid(ll mid, ll n, ll arr[])
{
    ll cnt = 1;
    ll i = 0, r = i + 1;
    while(r < n){
        if(arr[i] + mid + mid >= arr[r])
        {
            r++;
        }
        else
        {
            cnt++;
            i = r;
            r = i + 1;
        }
    }
    return (cnt < 4);
}

ll solve(ll n, ll arr[])
{
    ll l=0,r=1e12,ans = 0;

    while(l<=r)
    {
        ll mid = l+(r-l)/2;

        if(valid(mid,n,arr))
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
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll arr[n];
        for(ll i=0; i<n; i++) cin >> arr[i];

        sort(arr,arr+n);

        cout << solve(n,arr) << "\n";
    }


    return 0;
}