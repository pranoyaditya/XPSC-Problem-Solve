#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll num, ll arr[],ll maxLen[])
{
    if(num == 0) return 0;

    ll l=0,r=n-1,ans=n-1;

    while(l<=r)
    {
        ll mid = l+(r-l)/2;

        if(maxLen[mid] > num)
        {
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }

    while(maxLen[ans] > num)
    {
        ans--;
    }

    if(ans >= 0) return arr[ans];

    return 0;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,q;
        cin >> n >> q;

        ll arr[n],maxi=-100;
        ll maxLen[n];
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
            maxi = max(arr[i],maxi);
            maxLen[i] = maxi; 
        }

        for(ll i=1; i<n; i++)
        {
            arr[i] += arr[i-1];
        }

        while(q--)
        {
            ll num;
            cin >> num;

            cout << solve(n,num,arr,maxLen) << " ";
        }

        cout << "\n";
    }


    return 0;
}


// 100
// 15 521
// 11 14 3 10 6 11 3 14 3 7 14 2 10 5 4