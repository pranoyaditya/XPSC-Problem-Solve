#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n)
{
    bool flag = true;

    for(ll i=1; i<=n; i++)
    {
        ll x;
        cin >> x;

        bool check = false;

        for(ll j=i+1; j>=2; j--)
        {
            if(x%j != 0)
            {
                check = true;
                break;
            }
        }
        
        flag &= check;
    }

    return flag;
    
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        if(solve(n)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}