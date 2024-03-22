#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(string a, string b)
{
	ll cnt = 0;
	
	for(ll i=0; i<a.size(); i++)
	{
		if(a[i] != b[i]) cnt++;
	}
	
	return cnt;
}

int main()
{
	string a,b;
	cin >> a >> b;
	
	cout << solve(a,b) << endl;
	
	return 0;
}