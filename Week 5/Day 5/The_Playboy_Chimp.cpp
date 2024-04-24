#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll findLowerBound(ll n, ll num, ll arr[])
{
    ll l=0,r=n-1,ans = -1;

    while(l<=r)
    {
        ll mid = l+(r-l)/2;

        if(arr[mid] < num)
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }

    return ans;
}

ll findUpperBound(ll n, ll num, ll arr[])
{
    ll l=0,r=n-1,ans = -1;

    while(l<=r)
    {
        ll mid = l+(r-l)/2;

        if(arr[mid] > num)
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

    ll q;
    cin >> q;

    while(q--)
    {
        ll num;
        cin >> num;

        ll lower = findLowerBound(n,num,arr);
        ll upper = findUpperBound(n,num,arr);

        if(lower == -1 && upper == -1) cout << "X X\n";
        else if(lower == -1)
        {
            cout << "X " << arr[upper] << "\n";
        }
        else if(upper == -1) cout << arr[lower] << " X\n";
        else cout << arr[lower] <<" " << arr[upper] <<"\n";
    }

    return 0;
}