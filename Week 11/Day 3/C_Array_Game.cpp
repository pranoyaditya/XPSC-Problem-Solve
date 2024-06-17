#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll solve(ll n, ll k, vector<ll>&arr)
{
    ll ans = -1;

    if(k == 1)
    {
        ans = arr[0];

        for(ll i=1; i<n; i++) ans = min(ans,arr[i]-arr[i-1]);

        return ans;
    }
    else if(k == 2)
    {
        ll ans = arr[0];

        for(ll i=0; i<n-1; i++)
        {
            for(ll j = i+1; j<n; j++)
            {
                ll val = abs(arr[j]-arr[i]);

                ans = min(ans,val);

                ll indx = -1;
                ll low = 0,high = n-1;

                while(low<= high)
                {
                    ll mid = low+(high-low)/2;

                    if(arr[mid] >= val)
                    {
                        indx = mid;
                        high = mid-1;
                    }
                    else
                    {
                        low = mid+1;
                    }
                }

                if(indx == -1)
                {
                    ans = min({ans,val-arr[n-1]});
                }
                else
                {
                    ans = min(ans,arr[indx]-val);
                }

                if(indx==0)
                {
                   ans = min(ans,arr[0]-val);
                }
                else
                {
                   ans = min(ans,abs(val-arr[indx-1]));
                }
            }
        }

        return ans;
    }

    return 0;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,k;
        cin >> n >> k;

        vector<ll> arr(n);
        for(ll i=0; i<n; i++) cin >> arr[i];

        sort(arr.begin(),arr.end());

        cout << solve(n,k,arr) << endl;
    }

    return 0;
}