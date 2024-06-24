#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

string solve(ll n, ll sum, map<ll,ll>&mp, vector<ll>&v1)
{
    vector<ll> v2;
    priority_queue<ll> pq;
    pq.push(sum);

    for(ll i=1; i<n; i++)
    {
        while(!pq.empty() && mp[pq.top()] != 0)
        {
            v2.push_back(pq.top());
            mp[pq.top()]--;
            pq.pop();
        }

        if(!pq.empty())
        {
            ll x = pq.top();
            pq.pop();

            ll num1,num2;
            if(x%2 == 0)
            {
                num1 = x/2;
                num2 = x/2;
            }
            else
            {
                num1 = x/2;
                num2 = x/2+1;
            }

            pq.push(num1);
            pq.push(num2);
        }
    }

    while(!pq.empty() && mp[pq.top()] != 0)
    {
        v2.push_back(pq.top());
        mp[pq.top()]--;
        pq.pop();
    }

    sort(v2.begin(),v2.end());
    sort(v1.begin(),v1.end());

    if(v1 == v2) return "YES";
    return "NO";
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll arr[n+2],sum=0LL;
        map<ll,ll>mp;
        vector<ll> v1;

        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            mp[arr[i]]++;
            v1.push_back(arr[i]);
        }

        cout << solve(n,sum,mp,v1) << endl;

    }

    return 0;
}


