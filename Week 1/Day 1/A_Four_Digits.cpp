#include <bits/stdc++.h>
using namespace std;

int main()
{
	string st,ans;
	cin >> st;
	
	if(st.size() == 4) cout << st;
	else
	{
		for(int i=0; i< 4-st.size(); i++)
		{
			ans += '0';
		}
		
		ans += st;
		
		cout << ans;
	}
	
	return 0;
}