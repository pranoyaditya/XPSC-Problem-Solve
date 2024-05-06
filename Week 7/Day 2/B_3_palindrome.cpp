#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll n)
{
    string ans,a="aa",b="bb";
    bool flag = 1;

    while(ans.size() < n)
    {
        if(flag)
        {
            ans += a;
            flag = !flag;
        }
        else
        {
            ans += b;
            flag = !flag;
        }
    }

    if(ans.size() > n) ans.pop_back();
    // else if(ans.size() < n)

    cout << ans << endl;
}

int main()
{
    ll n;
    cin >> n;

    solve(n);


    return 0;
}