#include <bits/stdc++.h>
#define ll long long int
using namespace std;

pair<ll,ll> solve(ll n, vector<ll>&arr)
{
    ll sum=0,op=0,i;

    for(i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            op++;
            while(i<n && arr[i] < 0 )
            {
                arr[i] *= (-1);
                i++;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        sum += arr[i];
    }

    return {sum,op};
}

int main()
{
    ll test;
    cin >> test;

    while(test--)
    {
        ll n;
        cin >> n;

        vector<ll> arr;
       
        for(int i=0; i<n; i++)
        {
            ll x;
            cin >> x;

            if(x != 0) arr.push_back(x);
        }

        pair<ll,ll> ans = solve(arr.size(),arr);

        cout << ans.first << " " << ans.second << endl;
    }

    return 0;
}