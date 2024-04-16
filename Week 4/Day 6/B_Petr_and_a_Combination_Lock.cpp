#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool canBeUnlocked(ll n, ll arr[])
{

    vector<string> masks;
    ll limit = (1 << n);

    for(ll i=0; i<limit; i++)
    {
        string st;
        for(ll j=0; j<n; j++)
        {
            if(i & (1 << j)) st += '1';
            else st += '0';
        }

        reverse(st.begin(),st.end());

        masks.push_back(st);
    }

    bool unlocked = false;

    for(string st : masks)
    {
        ll cnt = 0;
        for(ll i=0; i<n; i++)
        {

            if(st[i] == '1') 
            {
                cnt += arr[i];
                cnt %= 360;
            }
            else 
            {
                cnt -= arr[i];
                cnt %= 360;
            }
        }

        if(cnt % 360 == 0) 
        {
            unlocked = true;
            break;
        }
    }

    return unlocked;
}

int main()
{
    ll n;
    cin >> n;

    ll arr[n];

    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    if(canBeUnlocked(n,arr)) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}