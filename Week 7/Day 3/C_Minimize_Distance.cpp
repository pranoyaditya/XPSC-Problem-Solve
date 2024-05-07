#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll findDistance(ll n, ll k, vector<ll>&pos,vector<ll>&neg)
{
    sort(pos.begin(),pos.end());
    sort(neg.begin(),neg.end());

    ll total=0;

    for(int i=pos.size()-1; i>=0; i -= k)
    {
        total += pos[i]*2;
    }

    for(int i=neg.size()-1; i>=0; i -= k)
    {
        total += neg[i]*2;
    }

    if(pos.empty() && neg.empty()) return total;
    if(pos.empty())
    {
        total -= neg.back();
        return total;
    }
    else if(neg.empty())
    {
        total -= pos.back();
        return total;
    }

    total -= max(pos.back(),neg.back());
    return total;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,k;
        cin >> n >> k;

        vector<ll>pos,neg;
        for(ll i=0; i<n; i++)
        {
            ll x;
            cin >> x;

            if(x>0) pos.push_back(x);
            else if(x<0) neg.push_back(-x);
        }

        cout << findDistance(n,k,pos,neg) << endl;
    }

    return 0;
}