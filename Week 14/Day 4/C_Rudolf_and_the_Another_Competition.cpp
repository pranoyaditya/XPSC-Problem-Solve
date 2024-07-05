#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, ll m, ll h, vector<vector<ll>> &v)
{
    vector<pair<ll,ll>> arr;

    for(auto &tmp : v)
    {
        sort(tmp.begin(),tmp.end());
    }

    for(ll i=1; i<n; i++)
    {
        ll total = 0;
        ll cnt = 0;
        ll sum = 0;

        for(auto val : v[i])
        {
            sum += val;
            if(sum > h) break;

            total += sum;
            cnt--;
        }

        arr.push_back({cnt,total});
    }

    ll total = 0;
    ll cnt = 0;
    ll sum = 0;

    for(auto val : v[0])
    {
        sum += val;
        if(sum > h) break;

        total += sum;
        cnt--;
    }

    sort(arr.begin(), arr.end());

    while(arr.size() && (arr.back() >= make_pair(cnt,total)))
    {
        arr.pop_back();
    }

    return (arr.size()+1);
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,m,h;
        cin >> n >> m >> h;

        vector<vector<ll>> v(n,vector<ll>(m));

        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++) 
            {
                cin >> v[i][j];
            }
        }

        cout << solve(n,m,h,v) << endl;


    }

    return 0;
}