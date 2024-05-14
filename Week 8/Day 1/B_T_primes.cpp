#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<bool>primes(1000005LL,true);

void sieveOfEratosthenes()
{
    for(ll i=2LL; i*i < 1000000LL; i++)
    {
        if(primes[i])
        {
            for(ll j= i*i; j <= 1000000LL; j+= i)
            {
                primes[j] = false;
            }
        }
    }
}

bool isTprime(ll num)
{
    if(num == 1) return false;

    ll sqNum = sqrt(num);

    if(sqNum * sqNum != num) return false;
    if(primes[sqNum]) return true;

    return false;
    
}


int main()
{


    sieveOfEratosthenes();

    ll t;
    cin >> t;

    while(t--)
    {
        ll num;
        cin >> num;

        if(isTprime(num)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}