#include <bits/stdc++.h>
using namespace std;

#define ll long long int

string solve(ll n, ll arr[])
{
    vector<ll>taken;
    string ans="";

    bool broken=false;

    for(ll i=0;i<n;i++)
    {
        if(taken.empty())
        {
            ans += '1';
            taken.push_back(arr[i]);
        }
        else
        {
            if(broken)
            {
               if(arr[i]<taken.back())
               {
                  ans += '0';
               }
               else
               {
                  if(arr[i] > taken[0])
                  {
                    ans += '0';
                  }
                  else
                  {
                    ans += '1';
                    taken.push_back(arr[i]);
                  }
               }
            }
            else
            {
               // till now, the array is sorted
               if(arr[i] >= taken.back())
               {
                  ans += '1';
                  taken.push_back(arr[i]);
               }
               else
               {
                  if(arr[i] >taken[0])
                  {
                    ans += '0';
                  }
                  else
                  {
                    broken=true;
                    ans += '1';
                    taken.push_back(arr[i]);
                  }
               }
            }
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

        ll arr[n];
        for(ll i=0; i<n; i++) cin >> arr[i];

        cout << solve(n,arr) << endl;
    }

    return 0;
}