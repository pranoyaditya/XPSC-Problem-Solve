#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll i, ll j, ll n, ll m, vector<vector<ll>>&arr)
{
    ll cnt = 0,row=i,col=j;

    // left upside.
    while(row >=0 && col >= 0 && row < n && col <m)
    {
        cnt += arr[row][col];
        row--;
        col--;
    }

    // left downside
    row = i+1;
    col = j-1;
    while(row >=0 && col >= 0 && row < n && col <m)
    {
        cnt += arr[row][col];
        row++;
        col--;
    }

    // right upside
    row = i-1;
    col = j+1;
    while(row >=0 && col >= 0 && row < n && col <m)
    {
        cnt += arr[row][col];
        row--;
        col++;
    }

    // right downside
    row = i+1;
    col = j+1;
    while(row >=0 && col >= 0 && row < n && col <m)
    {
        cnt += arr[row][col];
        row++;
        col++;
    }

    return cnt;
}

ll findX_Sum(ll n, ll m, vector<vector<ll>>&arr)
{
    ll ans = 0;

    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            ans = max(ans,solve(i,j,n,m,arr));
        }
    }

    return ans;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,m;
        cin >> n >> m;

        vector<vector<ll>> arr(n,vector<ll>(m,0));

        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cin >> arr[i][j];
            }
        }

        cout << findX_Sum(n,m,arr) << endl;
    }

    return 0;
}