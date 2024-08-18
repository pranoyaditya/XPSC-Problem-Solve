#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        int n,indxF,indxL;
        cin >>n;
        string st;
        cin >> st;

        for(int i=0; i<n; i++)
        {
            if(st[i] == 'B')
            {
                indxF = i;
                break;
            }
        }

        for(int i=n-1; i>=0; i--)
        {
            if(st[i] == 'B')
            {
                indxL = i;
                break;
            }
        }

        cout << indxL-indxF+1 << endl;
        
    }
    return 0;
}