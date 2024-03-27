#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll countSegmentsWithSmallSets(ll n, ll k, ll arr[])
{
    ll l=0,r=0,ans=0;
    multiset<ll> ml;

    while(r<n)
    {
        ml.insert(arr[r]);
        ll maxi = *ml.rbegin();
        ll mini = *ml.begin();

        if(maxi-mini <= k)
        {
            ans += (r-l+1);
        }
        else
        {
            while(l<r)
            {
                maxi = *ml.rbegin();
                mini = *ml.begin();

                if(maxi-mini <= k) break;
                auto it = ml.find(arr[l]);
                ml.erase(it);
                l++;
            }

            maxi = *ml.rbegin();
            mini = *ml.begin();

            if(maxi - mini <= k) ans += (r-l+1);
            
        }
        r++;
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

    cout << countSegmentsWithSmallSets(n,k,arr) << "\n";


    return 0;
}