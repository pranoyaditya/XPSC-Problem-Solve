#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll h, ll n, vector<ll>&p, vector<ll>&c)
{
    ll l = 0;
    ll r = 1e12;
    ll ans;

    while(l<=r)
    {
        ll mid = l + (r-l) /2;

        ll s = 0;

        for(ll i=0; i<n; i++)
        {
            s += (mid/c[i]) * p[i];

            if(s>=h) break;
        }

        if(h-s <=0)
        {
            ans = mid;
            r = mid-1;
        }
        else l = mid +1;
    }

    return ans + 1;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll h,n;
        cin >> h >> n;

        vector<ll> p(n);
        for(ll i=0; i<n; i++) cin >> p[i];

        vector<ll> c(n);
        for(ll i=0; i<n; i++) cin >> c[i];

        for(ll i=0; i<n; i++) h -= p[i];


        if(h<=0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << solve(h,n,p,c) << endl;
        }
    }

    return 0;
}

//         long long l = 0;
//         long long r = 1e12;
//         long long ans;

//         while (l <= r) // O(log2(1e12)) = O(40)
//         {
//             long long mid = (l + r) >> 1;

//             long long s = 0;

//             for (int i = 0; i < n; i++) // O(n)
//             {
//                 s += (mid / c[i]) * p[i];
//                 if (s >= h)
//                     break;
//             }
//             if (h - s <= 0)
//             {
//                 ans = mid;
//                 r = mid - 1;
//             }
//             else
//                 l = mid + 1;
//         }

//         cout << ans + 1 << endl;
//     }
//     return 0;
// }

// // TC - O(n * (log2(1e12))) = O(n * 40)
// // SC - O(n)