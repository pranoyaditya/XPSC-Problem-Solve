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

        ll m = n*(n-1)/2;

        ll arr[m];
        for(ll i=0; i<m; i++) cin >> arr[i];

        sort(arr,arr+m);

        for(ll i=0; i<m; i += --n) cout << arr[i] << " ";
        cout << 1000000000 << "\n";
    }

    return 0;
}