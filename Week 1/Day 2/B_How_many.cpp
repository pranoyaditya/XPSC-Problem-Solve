#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll countHowMany(ll s, ll t)
{
    ll count = 0;

    for(ll i=0; i<=s; i++)
    {
        for(ll j=0; j<=s; j++)
        {
            for(ll k=0; k<=s; k++)
            {
                if(i+j+k <= s && i*j*k<=t)
                {
                    count++;
                }
            }
        }
    }


    return count;
}

int main()
{
    int s,t;
    cin >> s >> t;

    cout << countHowMany(s,t) << endl;

    return 0;
}