#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, string st)
{
    ll ones=0,zeros=0;

    for(ll i=0; i<n; i++)
    {
        if(st[i] == '1') ones++;
        else zeros++;
    }

    for(ll i=0; i<n; i++)
    {
        if(st[i] == '0')
        {
            if(ones>0LL)
            {
                ones--;
            }
            else break;
        }
        else 
        {
            if(zeros > 0LL) zeros--;
            else break;
        }
    }

    return ones+zeros;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        string st;
        cin >> st;

        cout << solve(st.size(),st) << endl;
    }


    return 0;
}