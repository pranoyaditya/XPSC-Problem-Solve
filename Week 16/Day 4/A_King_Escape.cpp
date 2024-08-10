#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

bool solve(ll x)
{
    if(x ==0) return 0;
    return (x > 0);

}

int main()
{
    ll n,ax,ay,bx,by,cx,cy;
    cin >> n;
    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;

    if(solve(bx-ax) == solve(cx-ax) && solve(by-ay) == solve(cy-ay)) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}