#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        int col;
        cin >> col;

        char arr[2][col];

        for(int i=0; i<2; i++)
        {
            for(int j=0; j<col; j++)
            {
                cin >> arr[i][j];
            }
        }

        bool same = true;

        for(int i=0; i<col; i++)
        {
            if(arr[0][i] == 'R' && (arr[1][i] == 'B' || arr[1][i] == 'G'))
            {
                same = false;
                break;
            }
            else if(arr[1][i] == 'R' && (arr[0][i] == 'B' || arr[0][i] == 'G'))
            {
                same = false;
                break;
            }
        }

        if(same) cout << "YES\n";
        else cout << "NO\n";
        
    }

    return 0;
}