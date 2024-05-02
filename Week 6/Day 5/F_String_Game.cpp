#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool valid(ll mid, ll n, ll m, string t, string p, ll arr[])
{
    vector<bool> bad(n+1,false);

    for(ll i=0; i<mid; i++)
    {
        bad[arr[i]] = true;
    }

    ll i=0,j=0;
    bool found = false;
    while(i<n)
    {
        if(t[i] == p[j] && !bad[i+1])
        {
            j++;
        }
        i++;

        if(j == m)
        {
            found = true;
            break;
        }
    }

    return found;
}

ll solve(ll n, ll m, string t, string p, ll arr[])
{
    ll l=0,r=n,ans;

    while(l<=r)
    {
        ll mid = l+(r-l)/2;

        if(valid(mid,n,m,t,p,arr))
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }

    return ans;
}

int main()
{   
    string t,p;
    cin >> t >> p;

    ll arr[t.size()];
    for(ll i=0; i<t.size(); i++) cin >> arr[i];

    cout << solve(t.size(),p.size(),t,p,arr) << endl;

    return 0;
}