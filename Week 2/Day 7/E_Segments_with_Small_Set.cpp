#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll countSegmentsWithSmallSet(ll n, ll k, ll arr[])
{
    ll l=0,r=0,ans=0,cnt=0;
    vector<ll> count(1e5+7,0);

    for(r=0; r<n; r++)
    {
        if(!count[arr[r]]++)
        {
            if(++cnt > k)
            {
                while(true)
                {
                    
                    if(--count[arr[l++]] == 0) break;
                    
                }
            }
            
        }

        ans += (r-l+1);
    }

    return ans;
}

int main()
{
    ll n,k;
    cin >> n >> k;

    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << countSegmentsWithSmallSet(n,k,arr) << "\n";

    return 0;
}