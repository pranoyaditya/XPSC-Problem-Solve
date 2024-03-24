#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll k, ll s)
{
	ll ans = 0;
	
	for(ll i=0; i<=k; i++)
	{
		for(ll j=0; j<=k; j++)
		{
			ll res = s - i - j;

            if(res >= 0 && res <= k) ans++;
		}
	}
		
	return ans;
}

int main()
{
	ll k,s;
	cin >> k >> s;
	
	cout << solve(k,s) << endl;
	
	return 0;
}