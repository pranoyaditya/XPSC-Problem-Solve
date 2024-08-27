#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

void solve(ll n)
{
    if( n == 1)
    {
        cout << 1 << endl;
        return;
    }
    else if(n == 2)
    {
        cout << 2 << " " << 1 << endl;
        return;
    }

    vector<ll> ans(n,-1);
    ans[n/2] = 1;
    ans[0] = 3;
    ans[n-1] = 2;

    ll curr = 4;
    for(ll i=1; i<=n-1; i++)
    {
        if(ans[i] != -1) continue;
        ans[i] = curr++;
    }

    for(ll i=0; i<n; i++) cout << ans[i] << " ";
    cout << endl;
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

