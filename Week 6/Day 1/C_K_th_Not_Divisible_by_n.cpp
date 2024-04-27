#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll k)
{
    ll need = (k-1)/(n-1);
    return need+k;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,k;
        cin >> n >> k;

        cout << solve(n,k) << "\n";
    }

    return 0;
}