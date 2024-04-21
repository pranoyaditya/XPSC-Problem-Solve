#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool binarySearch(ll n, ll x, ll arr[])
{
    ll l=0,r=n-1;

    while(l<=r)
    {
        ll mid = l + (r-l)/2;

        if(arr[mid] == x) return true;
        else if(arr[mid] < x) l = mid+1;
        else r = mid-1;
    }

    return false;
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

        if(binarySearch(n,x,arr)) cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}