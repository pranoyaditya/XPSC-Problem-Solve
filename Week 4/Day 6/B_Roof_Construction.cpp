#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll n)
{
    vector<ll> ans(n);
    ans[0] = n-1;

    ll Xor=ans[0],cnt=n-2,i=1;

    while((cnt^Xor) < n-1)
    {
        ans[i] = cnt;
        Xor = cnt;
        i++;
        cnt--;
    }

    ans[i] = 0;
    i++;

    while(i<n)
    {
        ans[i] = cnt;
        cnt--;
        i++;
    }


    for(ll val : ans) cout << val << " ";
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