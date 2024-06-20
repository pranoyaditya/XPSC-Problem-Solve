#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

string solve(map<int,int>&difArray)
{
    ll sum = 0;

    for(auto val : difArray)
    {
        sum += val.second;

        if(sum > 2) return "NO";
    }

    return "YES";
}

int main()
{
    ll t;
    cin >> t;

    map<int,int>difArray;

    while(t--)
    {
        int l,r;
        cin >> l >> r;

        difArray[l]++;
        difArray[r+1]--;
    }

    cout << solve(difArray) << endl;

    return 0;
}