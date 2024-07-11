#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

void solve(ll n)
{
    if( n == 1)
    {
        cout << 1 << endl;
        return;
    }
    else if(n%2)
    {
        cout << -1 << endl;
        return;
    }

    ll total = 0, limit = n;
    ll i=0,j=n-1,k=0;

    vector<ll> ans;

    while(i <= j)
    {
        if(k%2)
        {
            ll cur = 0;

            if(j < total)
            {
                cur = (n+j)-total;
            }
            else cur = j-total;

            ans.push_back(cur);
            total = j;
            j--;
        }
        else
        {
            ll cur =0;

            if( i<= total)
            {
                cur = (n+i) - total;
            }
            else cur = i - total;

            ans.push_back(cur);
            total = i;
            i++;
        }
        k++;
    }

    for(auto val : ans) cout << val << " ";
    cout << endl;

}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        solve(n);
    }

    return 0;
}
