#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

void solve(ll n, ll arr[])
{
    vector<ll> v;

    if(n%2==1)
    {
        cout << "NO" << endl;
        return;
    }

    for(int i=0,j=n/2; i<n/2; i++,j++)
    {
        v.push_back(arr[i]);
        v.push_back(arr[j]);
    }

    v.push_back(v[0]);
    v.push_back(v[1]);

    int ans=0;

    for(int i=1; i<v.size()-1; i++)
    {
        if( v[i] > v[i-1] && v[i] > v[i+1])continue;
        else if( v[i] < v[i-1] && v[i] < v[i+1] )continue;
        else
        {
            ans=1;
            break;
        }
    }

    if(ans==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    
    cout<<"YES"<<endl;

    for(int i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll arr[n+4];
        for(ll i=0; i<n; i++) cin >> arr[i];

        sort(arr,arr+n);

        solve(n,arr);
    }

    return 0;
}
