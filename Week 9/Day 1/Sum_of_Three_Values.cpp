#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll findAnother(ll n, ll target, ll i, ll j, vector<pair<ll,ll>>&arr)
{
    ll l=0,r=n-1;

    while(l<=r)
    {
        ll mid = l+(r-l)/2;

        if(arr[mid].first == target && (arr[mid].second != i && arr[mid].second != j))
        {
            return arr[mid].second;
        }
        else if(arr[mid].first > target) r = mid-1;
        else l = mid+1;
    }

    return -1;
}

void solve(ll n, ll sum, vector<pair<ll,ll>>&arr)
{
    sort(arr.begin(),arr.end());

    pair<ll,ll> ans;
    bool found = false;
    ll third;

    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<n; j++)
        {
            if(arr[i].second != arr[j].second)
            {
                third = findAnother(n,sum-(arr[i].first+arr[j].first),arr[i].second,arr[j].second,arr);

                if(third != -1)
                {
                    found = true;
                    ans = {arr[i].second,arr[j].second};
                    break;
                }
            }
        }

        if(found) break;
    }

    if(found) cout << ans.first << " " << ans.second << " " << third << endl;
    else cout << "IMPOSSIBLE\n";
}

int main()
{
    ll n,sum;
    cin >> n >> sum;

    vector<pair<ll,ll>> arr;
    
    for(ll i=1; i<=n; i++)
    {
        ll x;
        cin >> x;

        arr.push_back({x,i});
    }

    solve(n,sum,arr);


    return 0;
}