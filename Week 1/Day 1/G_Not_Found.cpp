#include <bits/stdc++.h>
using namespace std;

int main()
{
	string st;
	
	cin >> st;
	
	int arr[26] = {0};
	
	for(int i=0; i<st.size(); i++)
	{
		arr[st[i]-'a']++;
	}
	
	bool found = false;
	char ch;
	
	for(int i=0; i<26; i++)
	{
		if(arr[i] == 0)
		{
			found = true;
			ch = i+'a';
			break;
		}
	}
	
	if(found) cout << ch << endl;
	else cout << "None\n";
	
	return 0;
}