#include <bits/stdc++.h>
using namespace std;

string lower(string st, int n)
{
    for(int i=0; i<n; i++)
    {
        if(st[i]>='A' && st[i]<='Z')
        {
            st[i] += ' ';
        }
    }

    return st;
}

string solve(int n, string st)
{
    if(n<4) return "NO";

    st = lower(st,n);
    
    auto new_end = unique(st.begin(),st.end());

    string ans;

    for(auto it=st.begin(); it!=new_end; it++)
    {
        ans += *it;
    }

    if(ans == "meow") return "YES";
    return "NO";
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;

        cout << solve(n,st) << endl;
    }

    return 0;
}