#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
	// your code goes here
	
	ll t;
	cin >> t;
	
	while(t--)
	{
	    ll n,b;
	    cin >> n >> b;
	    
	    ll ans = -1;
	    
	    for(ll i=0; i<n; i++)
	    {
	        ll x;
	        cin >> x;
	        
	        if((x & b) == b) 
	        {
	            ans &= x;
	        }
	    }
	    
	    if(ans == b) cout << "YES\n";
	    else cout << "NO\n";
	}
	
	
    return 0;
}
