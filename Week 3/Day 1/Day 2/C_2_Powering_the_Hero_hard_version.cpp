#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll findMaxPower(ll n, ll arr[])
{
    priority_queue<ll> pq;
    ll power = 0;

    for(ll i=0; i<n; i++)
    {
        if(arr[i]>0) pq.push(arr[i]);
        else if(arr[i] == 0)
        {
            if(!pq.empty())
            {
                power += pq.top();
                pq.pop();
            }
        }
    }

    return power;
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
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        cout << findMaxPower(n,arr) << endl;
    }

    return 0;
}