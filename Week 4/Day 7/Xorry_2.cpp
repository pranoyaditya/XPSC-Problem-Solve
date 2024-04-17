#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n)
{
    ll count = 0,a=1;

    while( a*2 <= n ) 
    {
        a *= 2;
        count++;
    }

    ll ans = 1;
    bool check = false;

    for(ll i=count-1; i>=0; i--)
    {
        if( n & (1 << i) )
        {
            check = true;
        }
        else
        {
            if(check) ans *= 2;
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
	    
	    cout << solve(n) << endl;
	}
	
	
    return 0;
}
