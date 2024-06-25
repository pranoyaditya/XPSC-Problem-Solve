#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, ll k, ll d, ll w, vector<ll>&patientTime)
{
    ll ans=0LL,count=0LL,t=-1LL;

    for(ll i=0LL; i<n; i++)
    {
        if(patientTime[i] <= t+d && count > 0LL)
        {
            count--;
        }
        else 
        {
            t = patientTime[i] + w;
            count = k-1LL;
            ans++;
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
        ll n,k,d,w;
        cin >> n >> k >> d >> w;

        vector<ll>patienTime(n);

        for(ll i=0; i<n; i++) cin >> patienTime[i];

        cout << solve(n,k,d,w,patienTime) << endl;
    }

    return 0;
}
