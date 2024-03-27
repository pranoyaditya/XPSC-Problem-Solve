#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll findNumberOfSegmentsWithBigSum(ll n, ll s, ll arr[])
{
    ll l=0,r=0,sum=0,ans=0;

    while(r<n)
    {
        sum += arr[r];

        while(sum >= s)
        {
            ans += (n-r);
            sum -= arr[l];
            l++;
        }
        r++;
    }

    return ans;
}

int main()
{
    ll n,s;
    cin >> n >> s;

    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << findNumberOfSegmentsWithBigSum(n,s,arr) << "\n";

    return 0;
}