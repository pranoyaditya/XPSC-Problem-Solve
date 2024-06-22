#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, ll arr[])
{
    ll ans[n] = {0};

    for(ll i=0; i<n; i++)
    {
        ll j;

        if(i == 0) j = ans[i];
        else j = ans[i-1];

        while(ans[i] == 0)
        {
            j++;
            if(arr[i] != j) 
            {
                ans[i] = j;
                break;
            }
        }
    }


    return ans[n-1];
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

        cout << solve(n,arr) << endl;
    }

    return 0;
}