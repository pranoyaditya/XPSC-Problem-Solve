#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll findCount(ll n, ll low, ll high, ll arr[])
{
    ll l=0,r=n-1,left=n;

    // find lower bound.
    while(l<=r)
    {
        ll mid = l + (r-l)/2;

        if(arr[mid] >= low)
        {
            left = mid;
            r = mid-1;
        }
        else l = mid+1;
    }


    l=0,r=n-1;
    ll right=n;

    // find upper bound.
    while(l<=r)
    {
        ll mid = l+(r-l)/2;

        if(arr[mid] > high)
        {
            right = mid;
            r = mid-1;
        }
        else l = mid+1;
    }


    return (right - left);
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
        ll low,high;
        cin >> low >> high;

        cout << findCount(n,low,high,arr) << " ";
    }

    return 0;
}