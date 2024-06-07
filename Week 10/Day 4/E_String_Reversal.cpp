#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
using namespace __gnu_pbds;
using namespace std;

template<typename T> using pbds = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;

ll solve(ll n, string st)
{
    string cpy = st;
    reverse(cpy.begin(),cpy.end());

    map<char, vector<ll>> posStraight,posReverse;

    for(ll i=0; i<n; i++)
    {
        posStraight[st[i]].push_back(i);
        posReverse[cpy[i]].push_back(i);
    }


    vector<ll> v(n);

    for(char ch = 'a'; ch<='z'; ch++)
    {
        for(ll i=0; i< posStraight[ch].size(); i++)
        {
            v[posReverse[ch][i]] = posStraight[ch][i];
        }
    }


    pbds<ll> p;
    ll ans = 0;

    for(ll i=n-1; i>=0; i--)
    {
        ans += p.order_of_key(v[i]);
        p.insert(v[i]);
    }

    return ans;
}

int main()
{
    ll n;
    string st;
    cin >> n >> st;

    cout << solve(n,st) << endl;

    return 0;
}