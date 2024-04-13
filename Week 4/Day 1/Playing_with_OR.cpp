#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll countOfOddSets(ll n, ll k, vector<bool>&arr)
{
    ll cnt = 0,l=0,r=0;

    while(r<n)
    {
        if(r-l+1 == k)
        {
            for(ll i=l; i<=r; i++)
            {
                if(arr[i]) 
                {
                    cnt++;
                    break;
                }
            }
            r++;
            l++;
        }
        else r++;
    }

    return cnt;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,k;
        cin >> n >> k;

        vector<bool> arr(n,false);

        for(ll i=0; i<n; i++)
        {
            ll x;
            cin >> x;

            if(x%2==1) arr[i] = true;

        }

        cout << countOfOddSets(n,k,arr) << "\n";
    }

    return 0;
}