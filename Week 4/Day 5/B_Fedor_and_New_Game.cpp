#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int findFriends(int n, int m, int k, int fedor, int arr[])
{
    string fedorBinary;

    // step-1 : find the binary representation of fedor's number.
    for(int i=0; i<n; i++)
    {
        if(fedor & 1) fedorBinary += '1';
        else fedorBinary += '0';
        fedor = fedor >> 1;
    }

    // reversing it to get the actual binary representation.
    reverse(fedorBinary.begin(),fedorBinary.end());

    // step-2 : storing every number in binary format.
    vector<string> setBits(m);

    for(int i=0; i<m; i++)
    {
        int val = arr[i];
        string tmp;

        for(int j=0; j<n; j++)
        {
            if(val & 1) tmp += '1';
            else tmp += '0';
            val = val >> 1;
        }

        reverse(tmp.begin(),tmp.end());

        setBits[i] = tmp;
    }

    int ans = 0;

    // step-3: checking for every number how many bits are different from fedor's binary number.

    for(string val : setBits)
    {
        int i=0,j=0;
        int dif = 0;

        while(i < n)
        {
            if(fedorBinary[i] != val[j]) dif++;
            i++;
            j++;
        }

        // updating answer.
        if(dif <= k) ans++;

    }

    return ans;

}

int main()
{
    // took input as given format.

    int n,m,k;
    cin >> n >> m >> k;

    int arr[m],fedor;

    for(int i=0; i<m; i++)
    {
        cin >> arr[i];
    }

    // this is fedor's number.
    cin >> fedor;

    cout << findFriends(n,m,k,fedor,arr) << endl;

    return 0;
}

