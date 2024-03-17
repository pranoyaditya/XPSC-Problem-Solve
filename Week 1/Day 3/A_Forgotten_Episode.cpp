#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll findMissingEpisode(ll n, vector<ll>&v)
{
    ll mising=n;

    for(ll i=0; i<n-1; i++)
    {
        if(v[i] != i+1)
        {
            mising = i+1;
            break;
        }
    }

    return mising;
}

int main()
{
    ll n;
    cin >> n;

    vector<ll> v(n-1);

    for(ll i=0; i<n-1; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    cout << findMissingEpisode(n,v) << endl;

    return 0;
}