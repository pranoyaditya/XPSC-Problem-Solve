#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll countNumberOfSegments(ll n, ll s, ll arr[])
{
    ll l=0,r=0,ans=0,sum=0;

    while(r<n)
    {
        sum += arr[r];

        if(sum <= s)
        {
            ans += (r-l+1);
        }
        else
        {
            while(sum > s && l < r)
            {
                sum -= arr[l];
                l++;
            }

            if(sum <= s)
            {
                ans += (r-l+1);
            }
        }

        r++;
    }

    return ans;
}

int main()
{
    ll n,s;
    cin >> n >> s;

    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << countNumberOfSegments(n,s,arr) << "\n";

    return 0;
}