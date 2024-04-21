#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool solve(ll n, ll b, ll q, ll total, ll cash)
{
    if(total > cash) return false;

    ll givenByN;

    if(total/n > q) givenByN = (q*n);
    else givenByN = (total/n)*n;

    total -= givenByN;

    if(total <= b) return true;
    return false;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll noteN,noteB,QofN,total;

        cin >> QofN >> noteB >> noteN >> total;

        if(solve(noteN,noteB,QofN,total,(noteN*QofN)+noteB)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}