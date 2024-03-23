#include <bits/stdc++.h>
using namespace std;

void get_minimum(int n, vector<string>&vst,int m)
{

    int mini = INT_MAX;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i!=j)
            {
                int ans = 0;

                string st = vst[i];
                string st2 = vst[j];

                for(int k=0; k<m; k++)
                {
                    ans += (abs((st[k]-'a') - (st2[k]-'a')));
                }

                mini = min(ans,mini);
            }
        }
    }

    cout << mini << endl;

    return;

}

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        int n,m;
        cin >> n >> m;

        vector<string> vst(n);

        for(int i=0; i<n; i++)
        {
            cin >> vst[i];
        }

        get_minimum(n,vst,m);
    }

    return 0;
}