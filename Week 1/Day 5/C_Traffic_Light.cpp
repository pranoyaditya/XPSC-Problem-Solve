#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll minimumTime(ll n, char ch, string st)
{
   st += st;
   n = st.size();

   ll ans = INT_MIN;
   ll dis = 0;

   for(ll i=n-1; i>=0; i--)
   {
        if(st[i] == 'g') dis = 0;
        if(st[i] == ch)
        {
            ans = max(ans,dis);
        }
        dis++;
   }

   return ans;
}

int main()
{
    ll t;
    cin >> t;

    // while(t--)
    // {
    //     ll n;
    //     char ch;
    //     cin >> n >> ch;

    //     string st;
    //     cin >> st;

    //     cout << minimumTime(n,ch,st) << "\n";
    // }

    string st;
    cin >> st;

    cout << st << endl;

    st.erase(st.begin());

    cout << st << endl;

    return 0;
}