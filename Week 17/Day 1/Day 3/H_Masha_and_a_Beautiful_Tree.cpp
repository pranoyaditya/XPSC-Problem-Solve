#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;
ll ans = 0;

void Operation(ll l1, ll r1, ll l2, ll r2, vector<ll>&arr)
{
    ll maxiL = 0;

    for(ll i=l1; i<=r1; i++) maxiL = max(maxiL, arr[i]);

    ll miniR = INT_MAX;
    for(ll i=l2; i<=r2; i++) miniR = min(miniR,arr[i]);

    if(maxiL > miniR)
    {
        ll R = l2;
        for(ll i=l1; i<=r1; i++)
        {
            swap(arr[i],arr[R]);
            R++;
        }
        ans++;
    }

    if(l1 == r1) return;
    ll mid1 = (l1+r1)/2;
    ll mid2 = (l2+r2)/2;

    Operation(l1,mid1,mid1+1,r1,arr);
    Operation(l2,mid2,mid2+1,r2,arr);

}

ll solve(ll n, vector<ll>&arr)
{
    if(is_sorted(arr.begin()+1, arr.end())) return 0;

    ll mid = (n+1)/2;
    Operation(1,mid,mid+1,n,arr);

    if(is_sorted(arr.begin()+1, arr.end())) return ans;

    return -1;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n+1);
        for(ll i=1; i<=n; i++) cin >> arr[i];

        cout << solve(n,arr) << endl;
        ans = 0;
    }

    return 0;
}


