#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll n, ll arr[])
{
    vector<ll> a = {2LL, 3LL, 5LL, 7LL, 11LL, 13LL, 17LL, 19LL, 23LL, 29LL, 31LL};
    
    vector<ll> ans(n,-1);

	ll cur_col = 1;

	for(ll p : a)
	{
		bool got = false;

		for(ll i = 0LL; i < n; i++)
		{
			if (ans[i] != -1) continue;

			if (arr[i] % p) continue;

			got = true;

			ans[i] = cur_col;
		}

		if (got) cur_col++;
	}

	cout << (cur_col - 1) << '\n';

	for(ll val : ans) cout << val << " ";

	cout << '\n';
}

int main()
{
	ll t;
    cin >> t;

	while(t--)
	{
		ll n;
        cin >> n;


		ll arr[n];

		for(ll i = 0LL; i < n; ++i) cin >> arr[i];

		solve(n,arr);

	}


	return 0;
}