#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll num1, ll num2)
{
    if(num2 == 1) 
    {
        cout << "NO\n";
        return;
    }
    
    if(num2 == 2) num2 += 2;

    cout << "YES\n";
    cout << num1 << " " << num1*(num2-1) << " " << num1*num2 << endl;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll num1,num2;
        cin >> num1 >> num2;

        solve(num1,num2);
    }

    return 0;
}