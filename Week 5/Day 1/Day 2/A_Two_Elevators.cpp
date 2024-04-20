#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll a,b,c,r;
        cin >> a >> b >> c;

        if(c > b) r = abs(b-c)*2 + abs(b-1);
        else r = abs(b-c)+(c-1); 

        a = abs(a-1);

        if(a == r) cout << 3 << endl;
        else if(a < r) cout << 1 << endl;
        else cout << 2 << endl;
    }

    return 0;
}