#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll numberOfWays(ll n, ll l, ll r, ll x, ll arr[])
{
    vector<string> masks;

    // Here will be 2^n combinations. So limit is 2^n.
    ll limit = (1<<n);

    // storing all the combinations in masks. Bit mask.
    for(ll i=1; i<limit; i++)
    {
        string st;

        // checking kth bit of i is set or unset.
        for(ll j=0; j<n; j++)
        {
            if(i & (1 << j)) st += '1';
            else st += '0';
        }

        reverse(st.begin(),st.end());

        masks.push_back(st);
    }

    // generating sets using the mask vector which stores all the combinations.
    vector<vector<ll>> ans;

    for(auto st : masks)
    {
        vector<ll> tmp;

        for(ll i=0; i<st.size(); i++)
        {
            if(st[i] == '1') tmp.push_back(arr[i]);
        }

        sort(tmp.begin(), tmp.end());

        ans.push_back(tmp);
    }

    // counting how many combinations are possible satisfying the requirements.
    ll count = 0;

    for(auto tmp : ans)
    {
        ll dificulty = 0,maxDifi = tmp[tmp.size()-1]-tmp[0];

        for(auto val : tmp)
        {
            dificulty += val;
        }

        if(dificulty >= l && dificulty <= r && maxDifi >= x) count++;
    }

    return count;
}

int main()
{
    ll n,l,r,x;
    cin >> n >> l >> r >> x;

    ll arr[n];

    for(ll i=0; i<n; i++) cin >> arr[i];

    sort(arr,arr+n);

    cout << numberOfWays(n,l,r,x,arr) << "\n";

    return 0;
}