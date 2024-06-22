#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

void solve(ll n, ll k)
{
    vector<ll>arr(n+1);
    set<ll> st;
    vector<ll>l(k+1,n+1),r(k+1, -1),sl,sr;

    for(ll i=1; i<=n; i++)
    {
        cin >> arr[i];

        l[arr[i]] = min(l[arr[i]], i);
        r[arr[i]] = i;
        st.insert(arr[i]); 
    }

    sl = l;
    sr = r;

    for(ll i=k-1; i>=1; i--)
    {
        sl[i] = min(sl[i],sl[i+1]);
        sr[i] = max(sr[i],sr[i+1]);
    }

    for(ll i=1; i<=k; i++)
    {
        if(!st.count(i))
        {
            cout << 0 << " ";
        }
        else 
        {
            cout << 2*(sr[i] - sl[i]+1) << " ";
        }
    }

    cout << endl;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,k;
        cin >> n >> k;

        solve(n,k); 
    }

    return 0;
}
