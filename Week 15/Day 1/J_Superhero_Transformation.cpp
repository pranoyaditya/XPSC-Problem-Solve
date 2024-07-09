#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

string solve(string s, string t)
{
    if(s.size() != t.size()) return "No";

    for(ll i=0; i<s.size(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') s[i] = '1';
        else s[i] = '0';

        if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u') t[i] = '1';
        else t[i] = '0';
    }
    
    if(s == t) return "Yes";
    return "No";
}

int main()
{
    string s,t;
    cin >> s >> t;

    cout << solve(s,t) << endl;

    return 0;
}