#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll x,y;
    cin >> x >> y;


    double val1 = y*log(x);
    double val2 = x*log(y);

    if(val1 < val2) cout << "<\n";
    else if(val1 > val2) cout << ">\n";
    else cout << "=\n";


    return 0;
}