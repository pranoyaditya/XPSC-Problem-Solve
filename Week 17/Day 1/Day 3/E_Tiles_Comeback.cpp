#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

string solve(ll n, ll k, vector<ll>&a)
{
    vector<ll> suff(n,0);
    suff[n-1] = 1;

    for(ll i=n-2; i>=0; i--) suff[i] = suff[i+1] + (a[i] == a[n-1]);

    if(a[0] == a[n-1])
    {
        if(suff[0]%k == 0 || suff[0] >= k) return "YES";
    }

    bool valid = false;
    ll cnt = 0;

    for(ll i=0; i<=n-2; i++)
    {
        cnt += (a[i] == a[0]);

        if(cnt%k == 0 && suff[i+1] >= k)
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
        ll n,k;
        cin >> n >> k;

        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];

        cout << solve(n,k,a) << endl;
    }

    return 0;
}


