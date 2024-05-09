#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string solve(ll n, string st)
{
    vector<ll> capIndex,smallIndex;

    for(ll i=0; i<n; i++)
    {
        if(st[i] >= 'A' && st[i] <='Z')
        {
            if(st[i] != 'B') capIndex.push_back(i);
            else
            {
                if(!capIndex.empty()) capIndex.pop_back();
            }
        }
        else
        {
            if(st[i] != 'b') smallIndex.push_back(i);
            else
            {
                if(!smallIndex.empty()) smallIndex.pop_back();
            }
        }
    }

    for(auto index : smallIndex)
    {
        capIndex.push_back(index);
    }

    sort(capIndex.begin(),capIndex.end());

    string ans;

    for(auto index : capIndex) ans += st[index];

    return ans;
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