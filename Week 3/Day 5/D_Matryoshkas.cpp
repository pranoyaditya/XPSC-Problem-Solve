#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll findMinimumDolls(ll n, vector<ll>&arr)
{
    sort(arr.begin(),arr.end(),greater<ll>());

    vector<pair<ll,ll>> v;

    for(ll i=0; i<n;)
    {
        ll j = i;

        while(i < n && arr[j] == arr[i])
        {
            i++;
        }

        v.push_back({arr[j],(i-j)});
    }


    ll m = v.size();

    ll ans = v[0].second;

    for(ll i=1; i<m; i++)
    {
        if(v[i].first+1 == v[i-1].first)
        {
            if(v[i].second > v[i-1].second) ans += (v[i].second-v[i-1].second);
        }
        else ans += v[i].second;
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

        vector<ll> arr(n+1);

        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }


        cout << findMinimumDolls(n,arr) << "\n";
    }

    return 0;
}