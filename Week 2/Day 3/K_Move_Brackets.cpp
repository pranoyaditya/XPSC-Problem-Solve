#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll minMoves(ll n, string st)
{
    stack<char> s;

    for(ll i=0; i<n; i++)
    {
        if(s.empty()) s.push(st[i]);
        else if(s.top() == '(' && st[i] == ')')
        {
            s.pop();
        }
        else s.push(st[i]);
    }

    return (s.size()/2);
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        string st;
        cin >> st;

        cout << minMoves(n,st) << endl;
    }

    return 0;
}