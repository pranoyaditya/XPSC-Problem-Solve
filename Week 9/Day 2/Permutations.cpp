#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll num)
{
    if(num == 1)
    {
        cout << num << endl;
        return;
    }
    else if(num <= 3)
    {
        cout << "NO SOLUTION\n";
        return;
    }

    for(ll i=2; i<=num; i += 2) cout << i << " ";
    for(ll i=1; i<=num; i += 2) cout << i << " ";
}

int main()
{   
    ll n;
    cin >> n;

    solve(n);


    return 0;
}