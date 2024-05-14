#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll num)
{
    if((num & 1) == 0) return num/2;

    return (num-1)/2;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll num;
        cin >> num;

        cout << solve(num) << endl;
    }

    return 0;
}