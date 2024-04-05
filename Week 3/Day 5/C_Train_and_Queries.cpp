#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

void answerQueries(ll q, map<ll,pair<ll,ll>>&mp)
{
    while(q--)
    {
        ll start,destination;
        cin >> start >> destination;

        if(!mp.count(start) || !mp.count(destination) || mp[start].first > mp[destination].second)
        {
            cout << "NO\n";
        }
        else cout << "YES\n";
    }
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,q;
        cin >> n >> q;

        map<ll,pair<ll,ll>> mp;

        for(ll i=1; i<=n; i++)
        {
            ll x;
            cin >> x;

            if(!mp.count(x))
            {
                mp[x].first = i;
                mp[x].second = i;
            }
            else 
            {
                mp[x].second = i;
            }
        }


        answerQueries(q,mp);
    }


    return 0;
}