#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	
	if(b==a) cout << 2*a << endl;
	else if(b>a) cout << (b-1)+b << endl;
	else cout << (a-1)+a << endl;
	
	return 0;
}