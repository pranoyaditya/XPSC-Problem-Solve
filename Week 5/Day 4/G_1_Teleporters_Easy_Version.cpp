#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll budget, ll arr[])
{
    ll cost[n];

    cost[0] = arr[0]+1;

    for(ll i=1; i<n; i++)
    {
        cost[i] = i+arr[i]+1;
    }

    sort(cost,cost+n);

    ll count = 0;

    for(ll i=0; i<n; i++)
    {
        if(budget-cost[i] >= 0)
        {
            count++;
            budget -= cost[i];
        }
    }

    return count;
}

int main()
{   
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,budget;
        cin >> n >> budget;

        ll arr[n];
        for(ll i=0; i<n; i++) cin >> arr[i];

        cout << solve(n,budget,arr) << "\n";
    }

    return 0;
}