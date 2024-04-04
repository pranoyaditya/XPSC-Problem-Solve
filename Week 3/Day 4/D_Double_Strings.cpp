#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string solve(ll n, vector<string>&v, map<string,bool>&mp)
{
    string ans;

    for(string st : v)
    {
        string first;
        bool found = false;

        for(ll i=0; i<st.size(); i++)
        {
            first += st[i];
            string second;

            for(ll j=i+1; j<st.size(); j++)
            {
                second += st[j];
            }

            if(mp[first] && mp[second])
            {
                ans += '1';
                found = true;
                break;
            }
        }

        if(!found) ans += '0';
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

        vector<string> v(n);
        map<string,bool> mp;

        for(ll i=0; i<n; i++)
        {
            cin >> v[i];
            mp[v[i]] = true;
        }

        cout << solve(n,v,mp) << "\n";


    }

    return 0;
}