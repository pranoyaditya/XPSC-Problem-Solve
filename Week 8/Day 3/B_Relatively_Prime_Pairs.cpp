#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll a, ll b)
{
    ll limit = (b-a)+1;

    cout << "YES\n";
    for(ll i=a; i<b; i += 2)
    {
        cout << i << " " << i+1 << "\n";
    }
}

int main()
{
    ll a,b;
    cin >> a >> b;

    solve(a,b);

    return 0;
}