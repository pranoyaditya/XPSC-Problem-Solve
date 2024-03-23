#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        string st,name="Timur";
        int n;
        cin >> n >> st;
        int cnt = 0;

        if(n==5)
        {
           sort(name.begin(),name.end());
           sort(st.begin(),st.end());

           if(st == name) cout << "YES\n";
           else cout << "NO\n";
        }
        else cout << "NO\n";
    }


    return 0;
}