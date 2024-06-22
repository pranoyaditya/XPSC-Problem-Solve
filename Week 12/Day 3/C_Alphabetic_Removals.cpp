
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

string solve(ll n, ll k, string st)
{
    multiset<char> ms;

    for(char ch : st) ms.insert(ch);

    multiset<char> f;
    for(char ch: ms) 
    {
        if(k) 
        {
            f.insert(ch);
            k--;
        }
        else break;
       
    }

    string ans; 

    for(char ch : st)
    {
        auto it = f.find(ch);

        if(it != f.end())
        {
            f.erase(it);
        }
        else
        {
            ans += ch;
        }
    }

    return ans;
}

int main()
{
    ll n,k;
    string st;

    cin >> n >> k >> st;

    cout << solve(n,k,st) << endl;

    return 0;
}