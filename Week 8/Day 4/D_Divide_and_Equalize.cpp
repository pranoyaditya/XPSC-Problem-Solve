#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool solve(ll n, ll arr[])
{
    map<ll,ll> primeFactors;

    for(ll i=0; i<n; i++)
    {
        for(ll j=2; j*j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                while(arr[i] %j ==0)
                {
                    primeFactors[j]++;
                    arr[i] /= j;
                }
            }
        }

        if(arr[i] != 1) primeFactors[arr[i]]++;
    }

    for(auto it=primeFactors.begin(); it != primeFactors.end(); it++)
    {
        if((*it).second %n !=0) return false;
    }

    return true;
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

        if(solve(n,arr)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}