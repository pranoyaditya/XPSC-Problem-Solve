#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, ll k, ll size, ll arr[])
{
    ll pos = size-n/2;
    ll ans = arr[pos];

    while(k > 1)
    {
        pos -= (n/2+1);
        ans += arr[pos];
        k--;
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

        ll size = n*k;
        ll arr[size+1];

        for(ll i=1; i<=size; i++) cin >> arr[i];

        cout << solve(n,k,size,arr) << endl;
    }

    return 0;
}