#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

string solve(ll n, string a, string b)
{
    bool flag = true;

    for(ll i=0; i<n; i++)
    {
        if(a[i] == '0' && b[i] == '1') flag = false;
        if(a[i] == '1') break;
    }

    if(flag) return "YES";
    return "NO";
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        string a,b;
        cin >> n >> a >> b;

        cout << solve(n,a,b) << endl;
    }

    return 0;
}