#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool solve(ll n, ll maxi, ll index, ll a[], ll b[])
{
    for(ll i=0; i<n; i++)
    {
        if(b[i] > a[i]) return false;
    }

    ll op = maxi-b[index];

    ll arr[n];

    for(ll i=0; i<n; i++)
    {
        ll ans = a[i]-op;

        arr[i] = max(ans,0LL);

        if(arr[i] != b[i]) return false;
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

        ll a[n],b[n],maxi=INT_MIN,index;
        for(ll i=0; i<n; i++) 
        {
            cin >> a[i];
            
            if(a[i] > maxi)
            {
                maxi = a[i];
                index = i;
            }
        }

        for(ll i=0; i<n; i++) cin >> b[i];

        if(solve(n,maxi,index,a,b)) cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}