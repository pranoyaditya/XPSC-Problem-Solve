#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll countGiftItems(ll l, ll r)
{
    ll cnt = 0;

    while(l <= r)
    {
        cnt++;
        l *= 2;
    }

    return cnt;
}

int main()
{
    ll l,r;
    cin >> l >> r;

    cout << countGiftItems(l,r) << endl;

    return 0;
}