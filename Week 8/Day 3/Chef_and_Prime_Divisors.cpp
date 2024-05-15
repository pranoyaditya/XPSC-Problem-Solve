#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool solve(ll a, ll b)
{
    while(true)
    {
        if(__gcd(a,b) == 1) break;
        
        b /= __gcd(a,b);
    }
    
    if(b == 1) return true;
    return false;
}

int main() 
{
	// your code goes here
	
	ll t;
	cin >> t;
	
	while(t--)
	{
	    ll a,b;
	    cin >> a >> b;
	   
	    if(solve(a,b)) cout << "Yes\n";
	    else cout << "No\n";
	}
	
	
    return 0;
}
