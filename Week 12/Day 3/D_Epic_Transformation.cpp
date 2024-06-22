#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, ll maxi)
{
    if(n%2 == 0)
    {
        if(maxi <= n/2)
        {
            return 0;
        }
        
        return (2*maxi-n);
    }

    if(maxi <= n/2)
    {
        return 1;
    }

    return (2*maxi-n);

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
        map<ll,ll>mp;
        ll maxi = 0;

        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;

            maxi = max(mp[arr[i]],maxi);
        }

        cout << solve(n,maxi) << endl;
    }

    return 0;
}
