#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

bool solve(ll n, vector<ll>&arr, ll frq[])
{
    vector<ll> v;

    for(ll i=0; i<n; i++)
    {
        if(frq[arr[i]%10] == 0) v.push_back(arr[i]%10);
        frq[arr[i]%10]++;
    }

    ll m = v.size();

    bool possible = false;

    if(frq[1] >=3) return true;

    for(ll i=0; i<m; i++)
    {
        if(frq[v[i]] >= 2)
        {
            for(ll j=0; j<m; j++)
            {
                if(v[j] == v[i]) continue;
                if((2*v[i] + v[j]) % 10 == 3)
                {
                    possible = true;
                }
            }
        }
    }

    for(ll i=0; i<m; i++)
    {
        for(ll j=0; j<m; j++)
        {
            for(ll k=0; k<m; k++)
            {
                if(i!=j && j!=k && k!=i && ((v[i]+v[j]+v[k])%10 == 3)) possible = true;
            }
        }
    }

    return possible;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        for(ll i=0; i<n; i++) cin >> arr[i];

        ll frq[11] = {0};

        if(solve(n,arr,frq)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}