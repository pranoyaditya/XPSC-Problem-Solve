#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll n)
{
    vector<ll> ans;
    
    if(n%2==0)
    {
        for(ll i=0; i<n; i += 2)
        {
            ans.push_back(2);
        }
    }
    else
    {
        n -= 3;
        for(ll i=0; i<n; i += 2)
        {
            ans.push_back(2);
        }
        ans.push_back(3);
    }

    cout << ans.size() << endl;
    for(ll val : ans) cout << val << " ";

    cout << endl;
}

int main()
{
    ll n;
    cin >> n;

    solve(n);

    return 0;
}