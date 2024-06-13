#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

void solve(ll num)
{
    vector<ll> ans;
    
    ans.push_back(num);

    while(__builtin_popcount(num) > 1)
    {
        ll p = __builtin_ctz(num);

        num -= (1 << p);
        ans.push_back(num);
    }

    while(num > 1)
    {
        num /= 2;
        ans.push_back(num);
    }

    cout << ans.size() << endl;
    for(auto val : ans) cout << val << " ";
    cout << endl;
}


int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll num;
        cin >> num;

        solve(num);
    }

    return 0;
}