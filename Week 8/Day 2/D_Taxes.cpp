#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll num)
{
    bool isPrime = true;
    for(ll i=2; i*i <=num; i++)
    {
        if(num%i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if(isPrime) return 1;
    if(num%2 == 0) return 2;
    num -= 2;

    isPrime = true;
    for(ll i=2; i*i <=num; i++)
    {
        if(num%i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if(isPrime) return 2;
    return 3;

}

int main()
{
    ll num;
    cin >> num;

    cout << solve(num) << "\n";


    return 0;
}