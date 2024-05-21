#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool solve(ll left, ll right)
{
    ll ch1 = left*2LL - right;
    ll ch2 = right*2LL - left;

    if(ch1 >= 0LL && ch1 % 3LL == 0LL && ch2 >= 0LL && ch2 % 3LL == 0LL) return true;

    return false;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll left,right;

        cin >> left >> right;

        if(solve(left,right)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}