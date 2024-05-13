#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll arr[], ll cpy[])
{
    ll cnt1=0,cnt2=0,ones=0,ans;
    bool operationDone = false;

    for(ll i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            cnt1 += ones;
        }
        else ones++;
    }

    ans = cnt1;
    cnt1=0;
    ones=0;

    for(ll i=0; i<n; i++)
    {
        if(cpy[i]==0)
        {
            if(!operationDone)
            {
                cpy[i] = 1;
                operationDone = true;
                ones++;
            }
            else cnt1 += ones;
            
        }
        else ones++;
    }

    ones = 0;

    for(ll i=n-1; i>=0; i--)
    {
        if(arr[i] == 1)
        {
            arr[i] = 0;
            break;
        }
    }

    for(ll i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            cnt2 += ones;
        }
        else ones++;
    }

    cnt1 = max(cnt1,cnt2);
    return max(cnt1,ans);
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll arr[n],cpy[n];
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
            cpy[i] = arr[i];
        }

        cout << solve(n,arr,cpy) << '\n';
    }

    return 0;
}