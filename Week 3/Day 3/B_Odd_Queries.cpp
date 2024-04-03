#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string isPossibleToMakeOdd(ll n, vector<ll>&preSum, ll l, ll r, ll k)
{
    ll total = preSum[n];

    ll sum = total - (preSum[r]-preSum[l-1]);
    ll result = sum+(k*(r-l+1));

    if(result%2==1) return "YES";
    return "NO";
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,q;
        cin >> n >> q;

        vector<ll>arr(n);
        vector<ll> preSum(n+1,0);

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];

            preSum[i+1] = preSum[i]+arr[i];
        }

        while(q--)
        {
            ll l,r,k;
            cin >> l >> r >> k;

            cout << isPossibleToMakeOdd(n,preSum,l,r,k) << endl;
        }
    }

    return 0;
}