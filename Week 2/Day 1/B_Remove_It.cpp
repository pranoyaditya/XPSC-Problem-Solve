#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll n, ll x)
{
	vector<ll> ans;
	
	for(ll i=0; i<n; i++)
	{
		ll val;
		cin >> val;
		if(val != x) ans.push_back(val);
	}
	
	
	for(ll val : ans)
	{
		cout << val << " ";
	}
}

int main()
{
	ll n,x;
	cin >> n >> x;
	
	solve(n,x);
	
	return 0;
}
