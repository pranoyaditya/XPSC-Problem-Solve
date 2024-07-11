#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

void solve(string a, string b)
{
    if(a[0] == b[0])
    {
        cout << "YES\n" << a[0] << "*" << endl;
       
        return;
    }
    else if(a[a.size()-1] == b[b.size()-1] )
    {
        cout << "YES\n" << "*" << a[a.size()-1] << endl;
        return;
    }

    for(ll i=0; i<b.size()-1; i++)
    {
        if(a.find(b.substr(i,2)) != string::npos)
        {
            cout << "YES\n" << "*" << b.substr(i,2) << "*" << endl;
            return;
        }
    }

    cout << "NO\n";
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        string a,b;
        cin >> a >> b;

        solve(a,b);
    }

    return 0;
}