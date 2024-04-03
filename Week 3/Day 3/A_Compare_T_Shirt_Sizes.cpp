#include <bits/stdc++.h>
#define ll long long int
using namespace std;

char compareShirts(string a, string b)
{
    ll n = a.size(),m = b.size();

    if(a[n-1] != b[m-1])
    {
        if(a[n-1] > b[m-1]) return '<';
        return '>';
    }
    else if(a[n-1] == 'S' && b[m-1] == 'S')
    {
        if(n > m) return '<';
        else if(n == m) return '=';
        return '>';
    }
    else if(n > m) return '>';
    else if(n < m) return '<';
    return '=';
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        string a,b;
        cin >> a >> b;

        cout << compareShirts(a,b) << endl;
    }

    return 0;
}