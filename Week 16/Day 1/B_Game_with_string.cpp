#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

bool solve(string st, ll n)
{
    bool win = false;

    stack<char> s;

    for(ll i=0; i<n; i++)
    {
        if(s.empty())
        {
            s.push(st[i]);
        }
        else if(s.top() == st[i])
        {
            s.pop();
            win = !win;
        }
        else s.push(st[i]);
    }

    return win;
}

int main()
{
    string st;
    cin >> st;

    if(solve(st,st.size())) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}