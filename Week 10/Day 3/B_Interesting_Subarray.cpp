#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

void solve(ll n, ll arr[])
{
    bool found = false;
   for(ll i=1; i<n; i++)
   {
        if(abs(arr[i]-arr[i-1]) >= 2)
        {
            cout << "Yes\n" << i << " " << i+1 << "\n";
            found = true;
            return;
        }
   }

   if(!found) cout << "No\n";
   return;
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

        solve(n,arr);

    }

    return 0;
}