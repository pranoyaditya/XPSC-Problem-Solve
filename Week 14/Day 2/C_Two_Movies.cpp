#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, vector<ll>&arr, vector<ll>&brr)
{
    ll strt = 0, end=0, pos=0, neg=0;

    for(ll i=0; i<n; i++)
    {
        if(arr[i] == 1 && brr[i] == 1) pos++;
        else if(arr[i] == -1 && brr[i] == -1) neg++;
        else
        {
            if(arr[i] >= brr[i]) strt += arr[i];
            else end += brr[i];
        }
    }

    while(pos--)
    {
        if(strt <= end) strt++;
        else end++;
    }

    while(neg--)
    {
        if(strt <= end) end--;
        else strt--;
    }

    return min(strt,end);

}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n),brr(n);

        for(ll i=0; i<n; i++) cin >> arr[i];
        for(ll i=0; i<n; i++) cin >> brr[i];

        cout << solve(n,arr,brr) << endl;
    }

    return 0;
}
 