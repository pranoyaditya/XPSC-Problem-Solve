#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll n, ll arr[])
{
    ll bit[30];
    for(ll i=0; i<30; i++) bit[i] = 0;

    for(ll i=0; i<30; i++)
    {
        ll num = (1LL << i);

        for(ll j=0; j<n; j++)
        {
            if((arr[j] & num) != 0)
            {
                bit[i]++;
            }
        }
    }


    for(ll i=1; i<=n; i++)
    {
        bool flag = false;

        for(ll j=0; j<30; j++)
        {
            if(bit[j]%i != 0)
            {
                flag = true;
                break;
            }
        }

        if(!flag) cout << i << " ";
    }
    cout << "\n";
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
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        solve(n,arr);
    }

    return 0;
}