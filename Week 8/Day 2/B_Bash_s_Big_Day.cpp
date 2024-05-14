#include <bits/stdc++.h>
#define ll long long int
using namespace std;


ll solve(ll n,vector<ll>&arr)
{
    map<ll,ll>mp;

    for(ll strength : arr)
    {
        for(ll i=2; i*i <= strength; i++)
        {
            if(strength%i == 0)
            {
                mp[i]++;

                while(strength%i == 0)
                {
                    strength /= i;
                }
            }
        }

        if(strength > 1) mp[strength]++;
    }

    ll ans = 1;

    for(auto it=mp.begin(); it !=mp.end(); it++)
    {
        ans = max(ans,(*it).second);
    }

    return ans;

}

int main()
{


    ll n;
    cin >> n;

    vector<ll>arr(n);

    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
        
    }

    cout << solve(n,arr) << "\n";

    return 0;
}