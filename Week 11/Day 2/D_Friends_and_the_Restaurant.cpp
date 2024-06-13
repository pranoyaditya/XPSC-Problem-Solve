#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, vector<ll>&contribution)
{
    ll ans = 0,l=0,r=n-1;
    sort(contribution.begin(),contribution.end(),greater<ll>());

    while(l<r)
    {
        if(contribution[l] >= 0 && contribution[r] >= 0) 
        {
            ans++;
            l++;
            r--;
        }
        else if(contribution[l] < 0 && contribution[r] < 0) break;
        else if(contribution[l] >= 0)
        {
            if(contribution[l] + contribution[r] >= 0) 
            {
                ans++;
                l++;
                r--;
            }
            else
            {
                r--;
            }
        }
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

        vector<ll> contribution(n,0);

        for(ll i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            contribution[i] -= x;
        }

        for(ll i=0; i<n; i++)
        {
            ll x;
            cin >> x;

            contribution[i] += x;
        }

        cout << solve(n,contribution) << endl;
    }

    return 0;
}