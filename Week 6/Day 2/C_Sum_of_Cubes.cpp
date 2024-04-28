#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll> qubes;

void makeQubes()
{
    for(ll i=1; i<=10001; i++)
    {
        ll ans = pow(i,3);
        qubes.push_back(ans);
    }

}

bool solve(ll x)
{
    bool found = false;

    for(ll i=0; i<qubes.size(); i++)
    {
        if(qubes[i] >= x) break;

        ll need = x - qubes[i];
        bool ok = false;
        ll l=0,r=qubes.size();

        while(l<=r)
        {
            ll mid = l+(r-l)/2;

            if(qubes[mid] == need)
            {
                ok = true;
                break;
            }
            else if(qubes[mid] < need)
            {
                l = mid+1;
            }
            else r = mid-1;
        }

        if(ok)
        {
            found = true;
            break;
        } 
    }

    return found;
}

int main()
{

    makeQubes();

    ll t;
    cin >> t;

    while(t--)
    {
        ll x;
        cin >> x;

        if(solve(x)) cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}