#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

ll solve(ll n, ll num, ll prefixSum[])
{
    ll l=0,r=n-1,ans=n-1;

    while(l<=r)
    {
        ll mid = l+(r-l)/2;

        if(prefixSum[mid] >= num)
        {
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }

    return ans+1;
}

int main()
{
    ll n;
    cin >> n;

    ll arr[n];
    for(ll i=0; i<n; i++) cin >> arr[i];

    ll prefixSum[n];
    prefixSum[0] = arr[0];
    for(ll i=1; i<n; i++) prefixSum[i] = prefixSum[i-1]+arr[i];

    ll q;
    cin >> q;

    while(q--)
    {
        ll num;
        cin >> num;

        cout << solve(n,num,prefixSum) << "\n";
    }

    return 0;
}