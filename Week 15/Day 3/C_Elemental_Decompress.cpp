#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

void solve(ll n, vector<ll>&arr)
{
    map<ll,vector<ll>> mp;

    for(ll i=1; i<=n; i++) mp[arr[i]].push_back(i);

    bool impossile = false;
    for(ll i=1; i<=n; i++)
    {
        if(mp[arr[i]].size() > 2)
        {
            impossile = true;
            break;
        }
    }

    if(impossile)
    {
        cout << "NO\n";
        return;
    }

    vector<ll> a(n+1,-1), b(n+1,-1);
    multiset<ll>remA,remB;

    for(ll i=1; i<=n; i++)
    {
        remA.insert(i);
        remB.insert(i);
    }

    for(ll i=1; i<=n; i++)
    {
        if(mp[i].empty()) continue;

        if(mp[i].size() == 1)
        {
            a[mp[i][0]] = i;
            remA.erase(remA.find(i));
        }
        else if(mp[i].size() == 2)
        {
            a[mp[i][0]] = i;
            remA.erase(remA.find(i));
            b[mp[i][1]] = i;
            remB.erase(remB.find(i));
        }
    }

    for(ll i=1; i<=n; i++)
    {
        if(a[i] == -1 && b[i] == -1)
        {
            auto itA = remA.end();
            itA--;

            a[i] = *itA;
            remA.erase(itA);

            auto itB = remB.end();
            itB--;
            b[i] = *itB;
            remB.erase(itB);
        }
        else if(a[i] == -1)
        {
            if(remA.empty())
            {
                impossile = true;
                break;
            }

            auto it = remA.upper_bound(b[i]);
            if(it == remA.begin())
            {
                impossile = true;
                break;
            }
            it--;
            a[i] = *it;
            remA.erase(it);
        }
        else if(b[i] == -1)
        {
            if(remB.empty())
            {
                impossile = true;
                break;
            }

            auto it = remB.upper_bound(a[i]);
            
            if(it == remB.begin())
            {
                impossile = true;
                break;
            }
            it--;
            b[i] = *it;
            remB.erase(it);
        }
    }

    if(impossile)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    for(ll i=1; i<=n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for(ll i=1; i<=n; i++)
    {
        cout << b[i] << " ";
    }
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

        vector<ll> arr(n+1);

        for(ll i=1; i<=n; i++) cin >> arr[i];

        solve(n,arr);

    }

    return 0;
}


