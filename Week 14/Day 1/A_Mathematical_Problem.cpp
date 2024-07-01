#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

string solve(ll n, string st)
{
    if(n <= 2) 
    {
        ll num = stoi(st);
        return to_string(num);
    }

    ll ans = INT_MAX;

    for(ll i=0; i<n-1; i++)
    {
        string tmp;
        tmp += st[i];
        tmp += st[i+1];

        ll sum = stoi(tmp);

        for(ll j=0; j<n; j++)
        {
            if(j != i && j!=i+1)
            {
                sum = min((sum*(st[j]-'0')), (sum+(st[j]-'0')));
            }
        }

        ans = min(ans,sum);
    }

    return to_string(ans); 
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        string st;
        cin >> n >> st;

        cout << solve(n,st) << endl;
    }

    return 0;
}