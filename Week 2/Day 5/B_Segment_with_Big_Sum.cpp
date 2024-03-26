#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll getWindowSize(ll n, ll s, ll arr[])
{
    ll l=0,r=0,ans=INT_MAX,sum=0;
    bool found = false;

    while(r<n)
    {
        sum += arr[r];

        while(sum >= s)
        {
            if(sum >= s)
            {
                ans = min(ans,r-l+1);
                found = true;
            }

            sum -= arr[l];
            l++;
        }
        r++;
    }

    if(!found) return -1;
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