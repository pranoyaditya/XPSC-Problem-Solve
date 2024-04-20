#include <bits/stdc++.h>
using namespace std;

string solve(string st, int n)
{
    string ans;

    int mid = n/2;

    // take first string and reverse it. Then add the ch and irreversed string.
    string tmp1;
    for(int i=mid-1; i>=0; i--)
    {
        tmp1 += st[i];
    }

    ans = tmp1;
    if(n%2 == 1)
    {
        ans += st[mid];
    }
    reverse(tmp1.begin(),tmp1.end());
    ans += tmp1;

    if(ans != st) return "YES";

    // sort the tmp1 string in decreasing and non-decreasing order and add it with ans.

    sort(tmp1.begin(),tmp1.end());
    ans = tmp1;
    if(n%2 == 1)
    {
        ans += st[mid];
    }
    sort(tmp1.begin(),tmp1.end(),greater<char>());
    ans += tmp1;

    if(ans != st) return "YES";

    return "NO";

}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string st;
        cin >> st;

        cout << solve(st,st.size()) << endl;
    }

    return 0;
}