#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, ll k, ll arr[])
{
    ll ans = 0LL;

    for(ll i=0; i<=n-1; i++)
    {
        ans += (arr[i]/k);
        arr[i] %= k;
    }

    sort(arr,arr+n);

    ll l=0,r=n-1;

    while(l<r)
    {
        if(arr[l]+arr[r] >= k)
        {
            ans++;
            r--;
        }
        l++;
    }

    return ans;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,k;
        cin >> n >> k;

        ll arr[n];
        for(ll i=0; i<n; i++) cin >> arr[i];

        cout << solve(n,k,arr) << endl;
    }

    return 0;
}


// e4{
//     int t;                  int_in(t);
//     while(t--){
//         ll n,k;             ll_in2(n,k);
//         vl a(n);            take_the_array_LL(a,0,n-1);

//         ll ans=0;

//         in_range(i,0,n-1){
//             ans+=(a[i]/k);
//             a[i]%=k;
//         }

//         sort(all(a));
//         int l=0,r=n-1;

//         while(l<r){
//             if(a[l]+a[r]>=k){
//                 ans++;
//                 r--;
//             }
//             l++;
//         }

//         ll_out(ans);nl;
//     }
//     checkmate
// }
