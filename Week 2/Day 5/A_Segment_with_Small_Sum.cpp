#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll getWindowSize(ll n, ll s, ll arr[])
{
    ll l=0,r=0,ans=0,sum=0;

    while(r<n)
    {
        sum += arr[r];

        if(sum <= s)
        {
            ans = max(ans,(r-l+1));
            r++;
        }
        else if(sum > s)
        {
            sum -= arr[l];
            l++;
            r++;
        }
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

    cout << getWindowSize(n,s,arr) << "\n";

    return 0;
}