#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll maxTime, ll start, ll n, ll arr[])
{
    if(start == 0) return start;

    ll total=start;

    for(ll i=0; i<n; i++)
    {
        total += min(maxTime-1,arr[i]);
    }

    return total;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll maxTime,initialTime,tools;
        cin >> maxTime >> initialTime >> tools;

        ll arr[tools];
        for(ll i=0; i<tools; i++) cin >> arr[i];

        sort(arr,arr+tools);

        cout << solve(maxTime,initialTime,tools,arr) << "\n";
    }
}