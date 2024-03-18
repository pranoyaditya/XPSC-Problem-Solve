#include <bits/stdc++.h>
using namespace std;

void getAns(int n, int m, int ar1[], int ar2[])
{
    vector<int> ans;

    int i=0,j=0;

    while(i<n && j<m)
    {
        if(ar1[i] < ar2[j])
        {
            i++;
        }
        else if(ar1[i] >= ar2[j])
        {
            ans.push_back(i);
            j++;
        }
    }

    while(i==n && j<m)
    {
        ans.push_back(i);
        j++;
    }



    for(int val : ans)
    {
        cout << val << " ";
    }
}

int main()
{
    int n,m;
    cin >> n >> m;
    int ar1[n],ar2[m];

    for(int i=0; i<n; i++)
    {
        cin >> ar1[i];
    }
    for(int i=0; i<m; i++)
    {
        cin >> ar2[i];
    }

    getAns(n,m,ar1,ar2);

    return 0;
}