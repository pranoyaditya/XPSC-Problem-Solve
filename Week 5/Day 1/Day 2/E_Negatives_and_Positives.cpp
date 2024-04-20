#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll arr[])
{
    sort(arr,arr+n);
    
    for(ll i=0; i<n-1; i++)
    {
        if(arr[i] < 0 && arr[i+1] < 0)
        {
            arr[i] *= (-1);
            arr[i+1] *= (-1);
        }
        else if(arr[i] < 0 && arr[i+1] == 0)
        {
            arr[i] *= (-1);
        }
        else if(arr[i] == 0 && arr[i+1] < 0)
        {
            arr[i+1] *= (-1);
        }
        else if(arr[i] < 0 || arr[i+1] < 0)
        {
            ll num1 = arr[i] * (-1);
            ll num2 = arr[i+1] * (-1);

            if(num1 > arr[i+1])
            {
                arr[i] = num1;
                arr[i+1] *= (-1);
            }
            else if(num2 > arr[i])
            {
                arr[i+1] = num2;
                arr[i] *= (-1);
            }
        }
        
    }

    ll sum = 0;

    for(ll i=0; i<n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll arr[n];

        for(ll i=0; i<n; i++) cin >> arr[i];

        cout << solve(n,arr) << "\n";
    }

    return 0;
}

// 4
// 2 -2 -7 -3 -- 10

// 7
// 0 2 -2 -8 -7 -3 -3 ---- 25