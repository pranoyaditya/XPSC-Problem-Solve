#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,num;
	cin >> a >> b >> c;
	
	bool found = false;
	
	for(int i=a; i<=b; i++)
	{
		if(i%c == 0)
		{
			found = true;
			num = i;
			break;
		}
	}
	
	if(found) cout << num << endl;
	else cout << "-1\n";
	
	return 0;
}