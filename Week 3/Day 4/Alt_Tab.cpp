#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

string solve(ll n, vector<string>&v)
{
    string ans;
    map<string,ll> mp;

    reverse(v.begin(),v.end());

    for(auto val : v)
    {
        mp[val]++;
        if(mp[val] <= 1)
        {
            ans += val[val.size()-2];
            ans += val[val.size()-1];
        }
    }

    return ans;
}

int main()
{
    ll n;
    cin >> n;

    vector<string> v(n);

    for(ll i=0; i<n; i++)
    {
        cin >> v[i];
    }

    cout << solve(n,v) << endl;

    return 0;
}