#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, string a)
{
    ll ans = INT_MAX;

    for(ll i=0; i<26; i++)
    {
        ll l=0,r=n-1,count=0;
        bool flag = false;

        while(l<r)
        {
            if(a[l] != a[r])
            {
                if(a[l] == 'a'+i)
                {
                    l++;
                    count++;
                }
                else if(a[r] == 'a'+i)
                {
                    r--;
                    count++;
                }
                else 
                {
                    flag = true;
                    break;
                }
            }
            else
            {
                l++;
                r--;
            }
        }

        if(!flag) ans = min(ans,count);
    }

    if(ans == INT_MAX) return -1;
    return ans;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        string a;
        cin >> n >> a;

        cout << solve(n,a) << endl;

    }

    return 0;
}