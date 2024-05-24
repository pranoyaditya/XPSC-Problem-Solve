#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string solve(ll n, string st)
{
    ll cnt[26] = {0};

    for(ll i=0; i<n; i++)
    {
        cnt[st[i]-'A']++;
    }

    string ans,right;    
    char oddChar;
    ll oddCount=0;

    for(char i = 'A'; i<='Z'; i++)
    {
        if(cnt[i-'A']%2 == 1)
        {
            oddCount++;
            oddChar = i;
        }
        else
        {
            for(ll j=0; j<cnt[i-'A']/2; j++)
            {
                ans += i;
            }
        }
    }

    right = ans;

    if(oddCount > 1) return "NO SOLUTION";
    else if(oddCount == 1)
    {
        for(ll i=0; i<cnt[oddChar-'A']; i++)
        {
            right += oddChar;
        }
    }

    reverse(right.begin(),right.end());

    ans += right;

    return ans;

    

}


int main()
{
    string st;
    cin >> st;

    cout << solve(st.size(), st) << endl;

    return 0;
}