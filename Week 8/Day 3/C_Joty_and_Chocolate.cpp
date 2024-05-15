#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll a, ll b, ll p, ll q)
{
    ll divBya = n/a;
    ll divByb = n/b;

    ll lcm = (a/__gcd(a,b))*b;

    ll commonDiv = n/lcm;

    divBya -= commonDiv;
    divByb -= commonDiv;

    ll ans = (divBya*p)+(divByb*q);

    ans += (commonDiv*max(p,q));

    return ans;
}

int main()
{
    ll n,a,b,p,q;
    cin >> n >> a >> b >> p >> q;


    cout << solve(n,a,b,p,q) << endl;


    return 0;
}