#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define  mod 1000000007




ll solve(ll n, ll k)
{
    ll ans=0,j=1;

    while(k>0)
    {
        if(k%2==1)
        {
            ans = (ans+j)%mod;
        }
        k /= 2;
        j = (j*n)%mod;
    }

    return ans;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,k;
        cin >> n >> k;

        cout << solve(n,k) << endl;
    }


    return 0;
}