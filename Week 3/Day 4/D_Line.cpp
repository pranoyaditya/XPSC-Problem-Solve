#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll n, string st)
{
    ll highest = 0 , minChang=0;
    vector<ll> removal;

    for(ll i=0; i<n; i++)
    {
        ll L = i;
        ll R = n-i-1;

        if(st[i] == 'L')
        {
            if(R > L)
            {
                minChang++;
                removal.push_back(R-L);
                highest += R;
            }
            else 
            {
                highest += L;
            }
        }
        else
        {
            if(L > R)
            {
                minChang++;
                removal.push_back(L-R);
                highest += L;
            }
            else 
            {
                highest += R;
            }
        }
    }

    sort(removal.begin(),removal.end(),greater<ll>());

    vector<ll> ans(n+1,highest);

    for(ll i=minChang-1; i>=1; i--)
    {
        if(!removal.empty())
        {
            highest -= removal.back();
            removal.pop_back();
        }

        ans[i] = highest;
    }

    for(ll i=1; i<=n; i++) cout << ans[i] << " ";
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

        string st;
        cin >> st;

        solve(n,st);
    }

    return 0;
}