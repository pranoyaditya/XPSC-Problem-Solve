#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll n, ll m)
{
    vector<vector<ll>> a(n, vector<ll> (m, 0LL));
 
        if(n == 4)
        {
            for(ll i=1LL; i<=n; i++)
            {
                for(ll j=1LL; j<=m; j++)
                {
                    a[i-1][j-1] = i + (j-1)*4;
                }
                    
            }
            
            for(ll i=0LL; i<n; i++)
            {
                for(ll j=0LL; j<m; j++)
                {
                    cout << a[i][j] << " ";
                }

                cout<<"\n";
            }
            return;
        }
        else
        {
            ll x = 1LL;
            for(ll i=0LL; i<n; i++)
            {
                for(ll j=0LL; j<m; j++)
                {
                    a[i][j] = x++;
                }
                    
            }
        }
 
        ll x = 0LL;
        for(ll i=0LL; i<n; i+=2LL, x++)
        {
            for(ll j=0LL; j<m; j++)
            {
                cout << a[i][j] << " ";
            }
                
            cout<<"\n";
        }
 
        for(ll i=1LL; i<n; i+=2LL, x++)
        {
            for(ll j=0; j<m; j++)
            {
                cout << a[i][j] << " ";
            }
                
            cout<<"\n";
        }
}
 
int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, m;
        cin >> n >> m;
 
        solve(n,m);

        cout << endl;
    }

    return 0;
}