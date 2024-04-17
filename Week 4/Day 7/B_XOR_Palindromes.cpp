#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string solve(ll n, string a)
{
    // count mathcing indices and non-matching indices to form the string palindrome.
    ll nonMatching=0,matching=0;

    for(ll i=0,j=n-1; i<j; i++,j--)
    {
        if(a[i] != a[j]) nonMatching++;
        else matching += 2;
    }

    // generate the answer string.
    string ans;

    for(ll i=0; i<=n; i++)
    {
        ll oneCount = i;

        oneCount -= nonMatching;

        if(oneCount < 0) 
        {
            ans += '0';
        }
        else
        {
            oneCount = max(oneCount%2,oneCount-matching);
            oneCount = max((ll)0,oneCount-(n%2));


            if(oneCount == 0) ans += '1';
            else ans += '0';
        }
    }


    return ans;
}

int main()
{
    ll t;
    cin >> t;
    
    while(t--)
    {
        ll n;
        cin >> n;

        string a;
        cin >> a;

        cout << solve(n,a) << "\n";
    }

    return 0;
}