#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll upperBound(ll n, ll coins, ll arr[])
{
    ll l=0,r=n-1,ans=n;

    while(l<=r)
    {
        ll mid = l+(r-l)/2;

        if(arr[mid] > coins)
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
    ll n;
    cin >> n;

    ll arr[n];
    for(ll i=0; i<n; i++) cin >> arr[i];

    sort(arr,arr+n);

    ll q;
    cin >> q;

    while(q--)
    {
        ll coins;
        cin >> coins;

        cout << upperBound(n,coins,arr) << "\n";
    }

    return 0;
}