#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

string solve(ll n, vector<ll>&arr)
{
    ll maxi = 0;
    for(ll i=1; i<=n; i++) maxi = max(maxi,arr[i]);

    if(maxi > n) return "NO";

    vector<ll> brr(n+1);

    for(ll i=1; i<=n; i++) brr[arr[i]]++;

    for(ll i=n-1; i>=0; i--) brr[i] += brr[i+1];

    for(ll i=1; i<=n; i++)
    {
        if(arr[i] != brr[i]) return "NO";
    }

    return "YES";
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n+1);
        for(ll i=1; i<=n; i++) cin >> arr[i];

        cout << solve(n,arr) << endl;
    }

    return 0;
}
	
