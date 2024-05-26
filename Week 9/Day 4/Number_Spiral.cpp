#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll row, ll col)
{
    ll ans;

    if(col > row)
    {
        if(col%2LL == 0LL)
        {
            ans = ((col-1LL)*(col-1LL)) + row;
            return ans;
        }

        ans = (col*col)-row+1LL;
        return ans;
    }
    else
    {
        if(row%2LL==0LL)
        {
            ans = row*row-col+1;
            return ans;
        }
        
        ans = ((row-1LL)*(row-1LL)) +col;
        return ans;
    }
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll row,col;
        cin >> row >> col;

        cout << solve(row,col) << endl;
    }

    return 0;
}