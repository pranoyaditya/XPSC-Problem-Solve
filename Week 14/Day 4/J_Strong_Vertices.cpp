#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

void solve(ll n, vector<ll>&arr, vector<ll>&brr)
{
    vector<ll>ans(n);

    for(ll i=0; i<n; i++)
    {
        ans[i] = arr[i]-brr[i];
    }

    ll maxi = INT_MIN;

    for(ll i=0; i<n; i++) maxi = max(maxi,ans[i]);

    vector<ll> result;

    for(ll i=0; i<n; i++) if(ans[i] == maxi) result.push_back(i+1);

    cout << result.size() << endl;
    for(auto val : result) cout << val << " ";

}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll>arr(n),brr(n);

        for(ll i=0; i<n; i++) cin >> arr[i];
        for(ll i=0; i<n; i++) cin >> brr[i];

        solve(n,arr,brr);
        cout << endl;
    }

    return 0;
}
