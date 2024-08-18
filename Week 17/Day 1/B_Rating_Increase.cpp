#include <bits/stdc++.h>
using namespace std;

void print_values(string st)
{
    if(st[0]=='0') 
    {
        cout << "-1\n";
        return;
    }

    int mid = st.size()/2;
    while(mid!=0)
    {
        string s1,s2,ans;

        for(int i=0; i<mid; i++)
        {
            s1 += st[i];
        }

        for(int i=mid; i<st.size(); i++)
        {
            s2 += st[i];
        }

        int a = stoi(s1);
        int b = stoi(s2);
        ans = to_string(a)+to_string(b);

        if(ans == st && b>a)
        {
            cout << a << " " << b << endl;
            return;
        }
        
        mid--;
    }
    cout << "-1\n";
}

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        string st;
        cin >> st;

        print_values(st);
    }
}