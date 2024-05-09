#include <bits/stdc++.h>
#define ll long long int
using namespace std;



ll solve(ll n, vector<ll>&count)
{
    vector<ll>maxi(n+1,0);
    // for(ll val : count) cout << val << " ";
    // cout << endl;

    for(ll i=1; i<=n; i++)
    {
        ll cnt = 0;

        for(ll j=i; j<=n; j += i)
        {
            maxi[j] += count[i];
        }   

    }

    sort(maxi.begin(),maxi.end(),greater<ll>());

    return maxi[0];
}

int main()
{   
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll>count(n+1,0);

        for(ll i=0; i<n; i++) 
        {
            ll x;
            cin >> x;

            if(x <= n) 
            {
                count[x]++;
            }
        }

        cout << solve(n,count) << endl;
    }


    return 0;
}