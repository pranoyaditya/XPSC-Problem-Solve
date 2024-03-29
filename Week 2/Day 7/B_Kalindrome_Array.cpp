#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool removeOccurences(ll arr[], ll x, ll n)
{
    ll i=0,j=n-1;
    while(i<j)
    {
        if(arr[i] == x) i++;
        else if(arr[j] == x) j--;
        else if(arr[i] != arr[j]) return false;
        else 
        {
            i++;
            j--;
        }
    }

    return true;
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

        bool palindrome = true;
        ll i=0,j=n-1;

        while(i<j)
        {
            if(arr[i] != arr[j])
            {
                palindrome = removeOccurences(arr,arr[i],n) || removeOccurences(arr,arr[j],n);
                break;
            }
            i++;
            j--;
        }

        if(palindrome) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
