#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll findLowerBound(ll n, ll num, ll arr[])
{
    ll index = -1,l=0,r=n-1;

    while(l<=r)
    {
        ll mid = l+(r-l)/2;

        if(arr[mid] == num)
        {
            index = mid;
            r = mid-1;
        }
        else if(arr[mid] < num)
        {
            l = mid+1;
        }
        else r = mid-1;
    }

    return index;
}

int main()
{
    ll cnt = 0;

    while(true)
    {
        ll n,q;
        cin >> n >> q;

        if(n == 0 && q == 0) break;

        ll arr[n];
        for(ll i=0; i<n; i++) cin >> arr[i];

        sort(arr,arr+n);

        cout << "CASE# " << cnt+1 << ":\n";
        cnt++;
        while(q--)
        {
            ll num;
            cin >> num;

            ll index = findLowerBound(n,num,arr);

            if(index == -1)
            {
                cout << num << " not found\n";
            }
            else cout << num << " found at " << index+1 << "\n";
        }
    }


    return 0;
}