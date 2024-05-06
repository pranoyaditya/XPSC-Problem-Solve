#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool isPossible(ll n, ll a[], ll b[])
{
    sort(a,a+n);
    sort(b,b+n);

    for(ll i=0; i<n; i++)
    {
        if(abs(a[i]-b[i]) > 1) return false;
        else if(a[i] > b[i]) return false;
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

        ll a[n],b[n];
        for(ll i=0; i<n; i++) cin >> a[i];
        for(ll i=0; i<n; i++) cin >> b[i];

        if(isPossible(n,a,b)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}