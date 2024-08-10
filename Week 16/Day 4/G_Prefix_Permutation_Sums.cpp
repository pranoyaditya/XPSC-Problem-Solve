#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

string solve(ll n, vector<ll>&v)
{
    ll total = (n*(n+1LL))/2LL;

    if(v[n-2] > total) return "NO";

    if(v[n-2] != total)
    {
        v[n-1] = total;

        vector<ll>arr;
        for(ll i=n-2; i>=0; i--) arr.push_back(v[i+1] - v[i]);

        arr.push_back(v[0]);

        bool valid = true;
        vector<bool> visited(n+1,false);

        for(ll i=0; i<n; i++)
        {
            if(arr[i] >n || visited[arr[i]])
            {
                valid = false;
                break;
            }
            visited[arr[i]] = true;
        }

        if(valid) return "YES";
        return "NO";
    }

    vector<bool>visited(n+1,false);
    vector<ll>sum;

    for(ll i=0; i<=n-2; i++)
    {
        if(i == 0)
        {
            sum.push_back(v[i]);
            if(v[i] <= n) visited[v[i]] = true;
        }
        else 
        {
            sum.push_back(v[i] - v[i-1]);
            if(v[i] - v[i-1] <= n) visited[v[i] - v[i-1]] = true;
        }
    }

    vector<ll> missing;
    for(ll i=1; i<=n; i++) if(!visited[i]) missing.push_back(i);

    if(missing.size() != 2) return "NO";

    bool valid = false;

    for(auto i : sum)
    {
        if(missing[0] + missing[1] == i)
        {
            valid = true;
            break;
        }
    }

    if(valid) return "YES";
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

        vector<ll> v(n);

        for(ll i=0; i<=n-2; i++) cin >> v[i];

        cout << solve(n,v) << endl;
    }

    return 0;
}

