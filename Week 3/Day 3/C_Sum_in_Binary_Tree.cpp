#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll get_sum(ll num)
{
    ll s=0;

    while(num!=0)
    {
        s += num;
        num /= 2;
    }

    return s;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll num;

        cin >> num;

        cout << get_sum(num) << endl;
    }
    return 0;
}