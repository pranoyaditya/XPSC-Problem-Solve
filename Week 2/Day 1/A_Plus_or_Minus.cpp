#include <bits/stdc++.h>
#define ll long long int
using namespace std;

char solve(ll a, ll b, ll c)
{
	if(a+b == c) return '+';
	return '-';
}

int main()
{
	ll t;
	cin >> t;
	
	while(t--)
	{
		ll a,b,c;
	    cin >> a >> b >> c;
	
	    cout << solve(a,b,c) << endl;
	}
	
	return 0;
}