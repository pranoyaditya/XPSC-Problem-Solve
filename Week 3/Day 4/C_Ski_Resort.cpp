#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll findWaysToTravel(ll n, ll k, ll q, ll arr[])
{
    ll ways = 0,cons=0;

    for(ll i=0; i<n; i++)
    {
        if(arr[i] <= q) 
        {
            cons++;

            if(i == n-1 || arr[i+1] > q)
            {
                if(cons >= k)
                {
                    ll x = (cons-k+1);
                    ll add = (x*(x+1))/2;
                    ways += add;
                }
                cons = 0;
            }
        }

        
    }

    return ways;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,k,q;
        cin >> n >> k >> q;

        ll arr[n];
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }


        cout << findWaysToTravel(n,k,q,arr) << "\n";

    }

    return 0;
}