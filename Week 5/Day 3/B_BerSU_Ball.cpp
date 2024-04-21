#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll findPairs(ll n, ll m, ll boy[], ll girl[])
{
    sort(boy,boy+n);
    sort(girl,girl+m);
    bool taken[m] = {false};

    ll count=0;

   for(ll i=0; i<n; i++)
   {
        for(ll j=0; j<m; j++)
        {
            if( abs(boy[i]-girl[j]) <= 1)
            {
                if(!taken[j])
                {
                    count++;
                    taken[j] = true;
                    break;
                }  
            }
        } 
   }

    return count;
}

int main()
{
    ll n,m;
    cin >> n;

    ll boy[n];
    for(ll i=0; i<n; i++) cin >> boy[i];

    cin >> m;
    
    ll girl[m];
    for(ll i=0; i<m; i++) cin >> girl[i];

    cout << findPairs(n,m,boy,girl) << "\n";

    return 0;
}