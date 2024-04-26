#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll arr[n],total=0;

        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];

            if(arr[i]>0) total += arr[i];
            else if(arr[i] < 0)
            {
                ll k = min(total,-arr[i]);
                arr[i] += k;
                total -= k;
            }
        }

        total = 0;

        for(ll i=0; i<n; i++)
        {
            if(arr[i] < 0)
            {
                total += abs(arr[i]);
            }
        }

        cout << total << endl;
    }

    return 0;
}