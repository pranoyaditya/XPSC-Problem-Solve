#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll n)
{
    if((n&1) != 0)
    {
        for(ll i=1; i<=n; i++) cout << i << " ";
        cout << endl;
        return;
    }

    ll q = n/2;

    for(ll i=1; i<=n; i++)
    {
        if(i == q) cout << n << " ";
        else cout << i << " ";
    }
    cout << endl;
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

        solve(n);
    }

    return 0;
}