#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll arr[])
{
    bool visited[n+1] = {false};
    vector<ll> a,b;

    for(ll i=0; i<n; i++)
    {
        if(arr[i] <= n)
        {
            if(!visited[arr[i]])
            {
                visited[arr[i]] = true;
            }
            else 
            {
                b.push_back(arr[i]);
            }
        }
        else b.push_back(arr[i]);
    }

    sort(b.begin(),b.end());

    for(ll i=1; i<=n; i++)
    {
        if(!visited[i])
        {
            a.push_back(i);
        }
    }

    bool valid = true;

    for(ll i=0; i<b.size(); i++)
    {
        if(2*a[i] >= b[i])
        {
            valid = false;
            break;
        }
    }

    if(valid) return b.size();
    return -1;
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
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        cout << solve(n,arr) << endl;
    }

    return 0;
}