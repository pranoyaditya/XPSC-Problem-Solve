#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll calculateMaximumPower(ll cars, ll outlets, ll hours, priority_queue<ll>&energyCapacity, priority_queue<ll>&powerOutlets)
{
    ll total = 0;

    while(!energyCapacity.empty() && !powerOutlets.empty())
    {
        ll capacity = energyCapacity.top();
        energyCapacity.pop();

        ll charge = powerOutlets.top();
        powerOutlets.pop();

        charge *= hours;

        if(charge > capacity) total += capacity;
        else total += charge;
    }

    return total;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll cars,outlets,hours;
        cin >> cars >> outlets >> hours;

        priority_queue<ll> energyCapacity;
        priority_queue<ll> powerOfOutlets;

        for(ll i=0; i<cars; i++)
        {
            ll x;
            cin >> x;
            energyCapacity.push(x);
        }

        for(ll i=0; i<outlets; i++)
        {
            ll x;
            cin >> x;
            powerOfOutlets.push(x);
        }

        cout << calculateMaximumPower(cars,outlets,hours,energyCapacity,powerOfOutlets) << "\n";
    }

    return 0;
}