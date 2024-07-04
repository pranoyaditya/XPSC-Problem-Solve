#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, vector<ll>&arr, map<ll,ll>&frq)
{
    ll ans = 0LL, sep = 0LL;

    sort(arr.begin(),arr.end());

    for(ll i=0; i<n; i++)
    {
        sep++;

        if(i == n-1 || arr[i+1] != arr[i])
        {
            ans += (sep*(sep-1LL))/2LL;
            sep = 0LL;
        }

        for(ll j=1; ; j++)
        {
            ll rightHandSide = arr[i]*(1 << j);
            if(rightHandSide > arr[n-1]) break;
            if(!frq[rightHandSide]) continue;
            if(rightHandSide - arr[i] == j)
            {
                ans += frq[rightHandSide];
            }
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

        vector<ll>arr(n);
        map<ll,ll> frq;

        for(ll i=0; i<n; i++) 
        {
            cin >> arr[i];
            frq[arr[i]]++;
        }

        cout << solve(n,arr,frq) << endl;

    }

    return 0;
}

