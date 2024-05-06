#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string solve(ll n, string st)
{
    stack<char> s;
    bool flag = false;
    
    for(ll i=0; i<n; i++)
    {
        if(s.empty())
        {
            s.push(st[i]);
        }
        else if(s.top() != st[i])
        {
            s.pop();
            flag = !flag;
        }
        else s.push(st[i]);
    }
    
    if(flag) return "Zlatan";
    return "Ramos";
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
	    
	    string st;
	    cin >> st;
	    
	    cout << solve(n,st) << endl;
	}
	
	
    return 0;
}
