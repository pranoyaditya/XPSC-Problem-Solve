#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n, ll k, ll currentSum, ll total, vector<ll>&arr)
{
     arr.push_back(total - currentSum);
    k = k%(n+1);

    for(ll i=0; i<n; i++)
    {
        cout<<arr[(i-k+n+1) % (n+1)]<<" ";
    }
    
    cout<<endl;
}

int main()
{
    int t; 
    cin>>t;

    while(t--)
    {
        ll n,k; 
        cin >> n >> k;

        vector<ll> arr;
        ll total = n*(n+1)/2, currentSum = 0;

        for(ll i=0; i<n; i++)
        {
            ll cur; 
            cin>>cur;
            arr.push_back(cur);
            currentSum += cur;
        }

       solve(n,k,currentSum,total,arr);
    }
 return 0;
}