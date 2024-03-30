#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void find_premutation(ll n, vector<vector<ll>> & ar)
{
    vector<ll>ans(n);
    vector<ll> indx[n+1];

    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<n-1; j++)
        {
            indx[ar[i][j]].push_back(j);
        }
    }

    for(ll i=1; i<=n; i++)
    {
        ll maxi=-1,mini=1000;

        for(ll val : indx[i])
        {
            maxi = max(maxi,val);
            mini = min(mini,val);
        }

        if(maxi == mini && maxi > 0)
        {
            ans[n-1] = i;
        }
        else ans[maxi] = i;
    }


    for(ll val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<vector<ll>> ar(n,vector<ll>(n-1));

        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n-1; j++)
            {
                cin >> ar[i][j];
            }
        }

        find_premutation(n,ar);
    }


    return 0;
}