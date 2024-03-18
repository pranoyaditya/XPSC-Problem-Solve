#include <bits/stdc++.h>
using namespace std;

void mergeArrays(int n, int m, int arr1[], int arr2[])
{
    vector<int> ans;

    int i=0,j=0;

    while(i<n && j<m)
    {
        if(arr1[i] <= arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else
        {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while(i<n)
    {
        ans.push_back(arr1[i]);
        i++;
    }

    while(j<m)
    {
        ans.push_back(arr2[j]);
        j++;
    }

    for(auto val : ans) cout << val << " ";
}

int main()
{
    int n,m;
    cin >> n >> m;

    int arr1[n],arr2[m];

    for(int i=0; i<n; i++)
    {
        cin >> arr1[i];
    }

    for(int i=0; i<m; i++)
    {
        cin >> arr2[i];
    }

    mergeArrays(n,m,arr1,arr2);

    return 0;
}