#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{   
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll ans = 1;

        while(true)
        {
            if(ans * 2 > n)
            {
                cout << ans-1 << "\n";
                break;
            }

            ans *= 2;
        }

    }


    return 0;
}