#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(vector<ll>&even, vector<ll>&odd)
{
    ll maxEv=0,maxOd=0;

    for(auto val:even)
    {
        maxEv += val;
    }

    if(odd.size()%2==1)
    {
        sort(odd.begin(),odd.end(),greater<ll>());

        for(ll i=0; i<odd.size()-1; i++)
        {
            maxOd += odd[i];
        }
    }
    else 
    {
        for(auto val : odd)
        {
            maxOd += val;
        }
    }

    return maxEv+maxOd;
}

int main()
{
    ll n;
    cin >> n;

    vector<ll>even;
    vector<ll>odd;

    for(ll i=0; i<n; i++)
    {
        ll x;
        cin >> x;

        if(x%2==0) even.push_back(x);
        else odd.push_back(x);
    }

    cout << solve(even,odd) << endl;

    return 0;
}