#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string solve(ll size, string st)
{
    ll x = 0LL,y=0LL;

    // checking if I can distribute total into two machines
    for(ll i=0; i<size; i++)
    {
        if(st[i] == 'N') y++;
        else if(st[i] == 'S') y--;
        else if(st[i] == 'E') x--;
        else x++;
    }

    if(abs(x)%2 || abs(y)%2) return "NO";
    else if(size == 2LL && x == 0LL && y == 0LL) return "NO";

    string ans;
    char machines[2] = {'R','H'};
    ll n = 0LL, s = 0LL, e = 1LL, w = 1LL;

    for(ll i=0LL; i<size; i++)
    {
        if(st[i] == 'N')
        {
            ans += machines[n];
            n = 1LL - n;
        }
        else if(st[i] == 'S')
        {
            ans += machines[s];
            s = 1LL-s;
        }
        else if(st[i] == 'W')
        {
            ans += machines[w];
            w = 1LL-w;
        }
        
        else
        {
            ans += machines[e];
            e = 1LL-e;
        }
        
    }

    return ans;

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

        cout << solve(n,st) << endl;
    }

    return 0;
}