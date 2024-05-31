#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, ll arr[])
{
    ll ans = 0;

    for(ll i=0; i<3; i++)
    {
        map<pair<ll,ll>,vector<ll>> mp;

        for(ll j=0; j<n-2; j++)
        {
            if(i == 0)
            {
                mp[{arr[j+1],arr[j+2]}].push_back(arr[j]);
            }
            else if(i == 1)
            {
                mp[{arr[j],arr[j+2]}].push_back(arr[j+1]);
            }
            else
            {
                mp[{arr[j],arr[j+1]}].push_back(arr[j+2]);
            }
        }

        for(auto val : mp)
        {
            sort(val.second.begin(), val.second.end());
            vector<ll> tmp;

            ll count = 1;
            for(ll k=1; k<val.second.size(); k++)
            {
                if(val.second[k] == val.second[k-1])
                {
                    count++;
                }
                else
                {
                    tmp.push_back(count);
                    count = 1;
                }
            }

            tmp.push_back(count);

            if(tmp.size() < 2) continue;

            ll sum = 0;
            for(ll v : tmp)
            {
                sum += v;
            }

            sum = sum*(sum-1)/2;
            ans += sum;

            for(auto v : tmp)
            {
                ans -= (v*(v-1)/2);
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

        ll arr[n];
        for(ll i=0; i<n; i++) cin >> arr[i];

        cout << solve(n,arr) << endl;
    }

    return 0;
}