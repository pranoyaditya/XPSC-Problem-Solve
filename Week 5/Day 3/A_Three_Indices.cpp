#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void findIndices(ll n, ll arr[])
{
    ll l,m,r;
    bool found = false;

    for(ll i=1; i<n-1; i++)
    {
        if(arr[i-1] < arr[i] && arr[i] > arr[i+1])
        {
            found = true;
            l = i-1;
            m = i;
            r = i+1;
            break;
        }
    }

    if(found) 
    {
        cout <<"YES\n";
        cout << l+1 << " " << m+1 << " " << r+1 << endl;
    }
    else cout << "NO\n";
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

        findIndices(n,arr);
    }

    return 0;
}