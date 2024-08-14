#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll arr[])
{
    ll ans = 0,x=1;

    for(ll i=0; i<n;)
    {
        ll j = i;

        while(i < n && arr[i] < (ll)pow(2,x))
        {
            i++;
        }

        ll cnt = (i-j);
        x++;

        cnt = (cnt*(cnt-1))/2;

        ans += cnt;
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

        ll arr[n];

        for(ll i=0; i<n; i++) cin >> arr[i];

        sort(arr,arr+n);

        cout << solve(n,arr) << endl;
    }

    return 0;
}