#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

void solve(ll n)
{
    if(n == 3)
    {
        cout << 2 << " " << 1 << " " << 3 << endl;
        return;
    }

    if(n%4 == 0)
    {
        ll add = (1LL << 30);
        ll cur = 1LL;

        for(ll i=1; i<=n/2; i++)
        {
            cout << cur << " " << cur+add << " ";
            cur++;
        }
        cout << endl;
        return;
    }

    if(n%2 == 1)
    {
        ll x = (1LL << 25);
        ll y = (1LL << 26);

        cout << y << " ";

        ll cur=1;

        for(ll i=1; i<n/2; i++)
        {
            cout << cur << " " << cur+x << " ";
            cur++;
        }

        if( (n/2)%2 == 0 ) y += x;
        cout << n/2 << " " << (n/2)+y << " ";
        cout << endl;
        return;
    }

    ll x = (1LL << 25);
    ll y = (1LL << 26);

    cout << 0 << " " << y << " ";

    ll cur = 1;

    for(ll i=1; i<=(n/2)-2; i++)
    {
        cout << cur << " " << cur+x << " ";
        cur++;
    }

    cout << cur << " " << cur+x+y << endl;

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



