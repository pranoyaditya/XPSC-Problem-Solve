#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll numberOfEqual(ll n, ll m, vector<ll>&arr1, vector<ll>&arr2)
{
    ll ans=0,l=0,r=0;

    while(l<n && r<m)
    {
        ll cnt1=0,cnt2=0,num=arr1[l];

        while(arr1[l] == num && l<n)
        {
            l++;
            cnt1++;
        }

        while(num > arr2[r] && r<m)
        {
            r++;
        }

        while(arr2[r] == num && r<m)
        {
            cnt2++;
            r++;
        }

        ans += (cnt1*cnt2);
    }

    return ans;
}

int main()
{
    ll n,m;
    cin >> n >> m;

    vector<ll> arr1(n);
    vector<ll>arr2(m);

    for(ll i=0; i<n; i++)
    {
        cin >> arr1[i];
    }
    for(ll i=0; i<m; i++)
    {
        cin >> arr2[i];
    }

    cout << numberOfEqual(n,m,arr1,arr2) << endl;

    return 0;
}