#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll lcm(ll a, ll b)
{
    return (a/__gcd(a,b))*b;
}

pair<ll,ll> solve(ll num)
{
    ll ans = 1;

    for(ll i=1; i*i <= num; i++)
    {
        if(num%i==0 && lcm(i,num/i) == num)
        {
            ans = i;
        }
        
    }

    return {ans,num/ans};    
}

int main()
{   
    ll num;
    cin >> num;

    pair<ll,ll> ans = solve(num);

    cout << ans.first << " " << ans.second << endl;

    return 0;
}