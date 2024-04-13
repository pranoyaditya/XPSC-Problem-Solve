#include <bits/stdc++.h>
#define ll long long int
using namespace std;

pair<ll,ll> getPair(ll num)
{
    ll bitNumber = 0;
    
    while((1 << bitNumber) <= num)
    {
        bitNumber++;
    }
    
    ll MSB = 1 << (bitNumber-1);
    
    ll A = MSB;
    ll B = num ^ A;
    
    return {B,A};
    
}

int main() 
{
	// your code goes here
	
	ll t;
	cin >> t;
	
	while(t--)
	{
	    ll num;
	    cin >> num;
	    
	    pair<ll,ll> p = getPair(num);
	    
	    cout << p.first << " " << p.second << endl;
	}
	
	
    return 0;
}
