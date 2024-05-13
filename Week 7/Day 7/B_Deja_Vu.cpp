#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll n, ll q, vector<ll>&arr, vector<ll>&query)
{
    for(ll i=0; i<n; i++)
    {
        for(ll val : query)
        {
            if(arr[i]% (1<<val) == 0)
            {
                val = val-1;
                arr[i] += (1<<val);
            }
        }
    }


    for(auto val : arr) cout << val << " ";
    cout << "\n";
}


int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,q;
        cin >> n >> q;

        vector<ll>arr(n),query;
        for(ll i=0; i<n; i++) cin >> arr[i];

        for(ll i=0; i<q; i++)
        {
            ll x;
            cin >> x;

            if(query.empty() || query.back() > x ) query.push_back(x);
        }

        solve(n,q,arr,query);
    }

    return 0;
}