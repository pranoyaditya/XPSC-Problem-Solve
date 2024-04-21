#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string solve(ll n, string st)
{
    string ans;

    for(ll i=n-1; i>=0; i--)
    {
        if(st[i] == '0')
        {
            string tmp;

            tmp += st[i-2];
            tmp += st[i-1];

            int digit = stoi(tmp);

            ans += ('a' + (digit-1));

            i -= 2;
        }
        else
        {
            int digit = st[i]-'0';

            ans += ('a' + (digit - 1));
        }
    }

    reverse(ans.begin(),ans.end());

    return ans;
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