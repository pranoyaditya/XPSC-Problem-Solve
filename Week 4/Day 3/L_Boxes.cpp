#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll arr[])
{
    sort(arr,arr+n,greater<ll>());
    
    ll Xor = 0,i=0,ans=0;
    
    while(i<n)
    {
        if(Xor >= arr[i])
        {
            Xor ^= arr[i];
            i++;
        }
        else
        {
            ans++;
            Xor = arr[i];
            i++;
        }
    }
    
    return ans;
}

int main() 
{
	// your code goes here
	
	ll t;
	cin >> t;
	
	while(t--)
	{
	    ll n;
	    cin >> n;
	    
	    ll arr[n];
	    
	    for(ll i=0; i<n; i++)
	    {
	        cin >> arr[i];

	    }
	    
	    cout << solve(n,arr) << endl;
	}
	
	
    return 0;
}
