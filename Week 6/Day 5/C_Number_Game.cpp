#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll arr[])
{
    sort(arr,arr+n);
    ll ans = 0;

    for(ll k=1; 2*k-2<n ; k++)
    {
        ll i=2*k-2,j=k;
        for(; j>=1; i--,j--)
        {
            if(arr[i] > j)
            {
                break;
            }
        }
        if(j==0)
        {
            ans = k;
        }
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

        cout << solve(n,arr) << endl;
    }

    return 0;
}