#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll arr[])
{
    ll ans = INT_MAX;
    
    
    for(ll i=1; i<n-1; i++)
    {
        ll ch1 = abs(arr[i-1]-arr[i]);
        ll ch2 = abs(arr[i]-arr[i+1]);
        
        ch1 = max(ch1,ch2);
        
        ans = min(ans,ch1);
    }
    
    ans = min(ans,abs(arr[0]-arr[1]));
    ans = min(ans,abs(arr[n-1]-arr[n-2]));
    
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
	    for(ll i=0; i<n; i++) cin >> arr[i];
	    
	    cout << solve(n,arr) << endl;
	}
	
	
	
    return 0;
}
