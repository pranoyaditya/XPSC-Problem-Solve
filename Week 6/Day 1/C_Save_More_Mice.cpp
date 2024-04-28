#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll hole, ll arr[])
{
    sort(arr,arr+n,greater<ll>());

    ll dif[n],distance=0,total=0;

    for(ll i=0; i<n; i++)
    {
        dif[i] = hole-arr[i];

        if(distance + dif[i] < hole) 
        {
            total++;
            distance += dif[i];
        }
        else break;
    }

    return total;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll hole,n;
        cin >> hole >> n;

        ll arr[n];
        for(ll i=0; i<n; i++) cin >> arr[i];

        cout << solve(n,hole,arr) << endl;
    }

    return 0;
}