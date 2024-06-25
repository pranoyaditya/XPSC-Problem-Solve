#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

bool solve(ll dragonLife, ll absorption, ll lightining)
{
    //dragonLife += (absorption*10 - (lightining*10));
    if(dragonLife <= (lightining*10)) return true;
    
    while(absorption--)
    {
        dragonLife /= 2;
        dragonLife += 10;

        if(dragonLife <= (lightining*10)) 
        {
            dragonLife = 0;
            break;
        }
    }

    if(dragonLife <= (lightining*10)) return true;
    return false;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll dragonLife,absorption,lightining;
        cin >> dragonLife >> absorption >> lightining;

        if(solve(dragonLife,absorption,lightining)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}