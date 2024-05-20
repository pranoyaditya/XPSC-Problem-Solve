#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

ll solve(ll n, vector<ll>&arr)
{
    ll ans = 0;

    ll i=0,j=0;
    set<ll> st;

    while(i<n && j<n)
    {
        while(j<n && !st.count(arr[j]))
        {
            st.insert(arr[j]);
            ans = max(ans,j-i+1);
            j++;
        }


        while(j<n && st.count(arr[j]))
        {
            st.erase(arr[i]);
            i++;
        }

    }

    return ans;
}

int main()
{   
    ll n;
    cin >> n;

    vector<ll>arr(n);

    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << solve(n,arr) << endl;

    return 0;
}