#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll sum, ll arr[])
{
    ll l=0LL,r=0LL,addition=0LL,ans=0LL;

    while(r < n)
    {
        addition += arr[r];
        
        while(addition > sum)
        {
            addition -= arr[l];
            l++;
        }

        if(addition == sum)
        {
            ans++;
            addition -= arr[l];
            l++;
        }
        r++;
        
    }

    return ans;
}

int main()
{
    ll n,sum;
    cin >> n >> sum;

    ll arr[n];
    for(ll i=0LL; i<n; i++) cin >> arr[i];

    cout << solve(n,sum,arr) << endl;


    return 0;
}