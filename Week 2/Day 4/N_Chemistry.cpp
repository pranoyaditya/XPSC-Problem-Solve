#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string CanbePalindrome(ll n, ll k, ll frq[], string st)
{

    ll need = (n-k);

    for(ll i=0; i<26; i++)
    {
        if(frq[i] > 0 && frq[i]%2==0)
        {
            if(frq[i]>need) 
            {
                need -= need;
            }
            else need -= frq[i];
            
        }
        else if(frq[i] > 0 && frq[i]%2==1)
        {
            if(frq[i]-1 > need)
            {
                need -= need;
            }
            else need -= (frq[i]-1);
        }
    }

    if(need==1)
    {
        for(ll i=0; i<26; i++)
        {
           if(frq[i]>=1) return "YES";
        }
    }

    if(need == 0) return "YES";
    return "NO";

}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,k;
        cin >> n >> k;

        ll frq[26] = {0};
        string st;

        for(ll i=0; i<n; i++)
        {
            char x;
            cin >> x;
            st += x;
            frq[x-'a']++;
        }

        cout << CanbePalindrome(n,k,frq,st) << "\n";
    }

    return 0;
}