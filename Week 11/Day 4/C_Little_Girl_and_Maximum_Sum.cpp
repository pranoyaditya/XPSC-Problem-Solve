#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, ll q, vector<ll>&v, vector<ll>&difArray)
{
    ll total = 0LL;
    sort(v.begin(),v.end(),greater<ll>());

    while(q--)
    {
        ll l,r;
        cin >> l >> r;

        // making the difference array based on contribution of the indices.
        difArray[l]++;
        difArray[r+1]--;
    }

    // prefix sum of the difference array which will tell me most contributing indices.
    for(ll i=1; i<=n; i++) difArray[i] += difArray[i-1];

    sort(difArray.begin(),difArray.end(),greater<ll>());

    // for(auto val : difArray) cout << val << " ";
    // cout << endl;
    // for(auto val : v) cout << val << " ";

    cout << endl;

    for(ll i=0; i<n; i++)
    {
        if(difArray[i] > 0) total += difArray[i]*v[i];
    } 

    return total;
}

int main()
{
    ll n,q;
    cin >> n >> q;

    vector<ll> v(n+1),difArray(n+2,0);

    for(ll i=1; i<=n; i++) cin >> v[i];

    cout << solve(n,q,v,difArray) << endl;

    return 0;
}