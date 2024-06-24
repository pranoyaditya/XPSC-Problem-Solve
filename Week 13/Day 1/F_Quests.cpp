#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

bool isPossible(ll n, ll d, ll c, ll k, vector<ll>&arr)
{
    if(k == 0) return (arr[0]*d >= c);

    ll sum = 0LL, gain = 0LL;

    if(k >= n) for(ll i=0; i<n; i++) sum += arr[i];
    else for(ll i=0; i<k; i++) sum += arr[i];

    ll times = d/k;
    gain = times*sum;

    ll remainder = d%k;

    if(remainder >= n) for(ll i=0; i<n; i++) gain += arr[i];
    else for(ll i=0; i<remainder; i++) gain += arr[i];

    return gain >= c;

}

ll solve(ll n, ll d, ll c, vector<ll>&arr)
{
    ll ans = -1, low=0,high = 1000000000000LL;

    while(low <= high)
    {
        ll mid = low+(high-low)/2;

        if(isPossible(n,d,c,mid+1,arr))
        {
            ans = mid;
            low = mid+1;
        }
        else high = mid-1;
    }

    return ans;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,c,d;
        cin >> n >> c >> d;

        vector<ll> arr(n);
        for(ll i=0; i<n; i++) cin >> arr[i];

        sort(arr.begin(),arr.end(),greater<ll>());

        ll total = 0LL;
        for(ll i=0; i<min(n,d); i++)
        {
            total += arr[i];
        }

        if(total >= c) cout << "Infinity\n";
        else
        {
            ll ans = solve(n,d,c,arr);

            if(ans == -1) cout << "Impossible\n";
            else cout << ans << endl;
        }
    }

    return 0;
}


