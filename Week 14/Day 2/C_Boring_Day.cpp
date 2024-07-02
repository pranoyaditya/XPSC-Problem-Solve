#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, ll l, ll r, vector<ll>&arr)
{
    ll j=0,sum=0,ans=0;

    for(ll i=0; i<n; i++)
    {
        sum += arr[i];

        if(sum < l) continue;

        if(sum <= r)
        {
            ans++;
            j = i+1;
            sum = 0;
            continue;
        }

        while(j <= i && sum > r)
        {
            sum -= arr[j];
            j++;
        }

        if(sum >= l)
        {
            ans++;
            j = i+1;
            sum = 0;
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
        ll n,l,r;
        cin >> n >> l >> r;

        vector<ll> arr(n);
        for(ll i=0; i<n; i++) cin >> arr[i];

        cout << solve(n,l,r,arr) << endl;
    }

    return 0;
}


