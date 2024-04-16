#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll N = (1 << 15);

vector<ll>palindromes;

void markPalindromes()
{
    for(ll i=0; i<N; i++)
    {
        string st = to_string(i);

        ll k=0,j=st.size()-1;
        bool ok = true;

        while(k<j)
        {
            if(st[k] != st[j])
            {
                ok = false;
                break;
            }
            k++;
            j--;
        }

        if(ok) palindromes.push_back(i);
    }
}

ll solve(ll n, ll arr[], vector<ll>&count)
{
    ll ans = n;

    for(ll i=0; i<n; i++)
    {
        for(ll val : palindromes)
        {
            ll Xor = arr[i] ^ val;

            ans += count[Xor];
        }
    }

    return (ans/2);
}

int main()
{

    markPalindromes();

    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll arr[n];
        vector<ll>count(N,0);

        for(ll i=0; i<n; i++) 
        {
            cin >> arr[i];
            count[arr[i]]++;
        }

        cout << solve(n,arr,count) << endl;

    }

    return 0;
}