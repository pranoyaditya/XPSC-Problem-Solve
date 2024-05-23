#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll a, ll b)
{
    if(a == b && a%2==1)
    {
        bool flag = false;

        for(ll i=2LL; i*i <= a; i++)
        {
            if(a%i == 0LL)
            {
                cout << i << " " << a-i << endl;
                flag = true;
                break;
            }
        }


        if(!flag) cout << "-1\n";
        return;
    }

    a = a/2+ a%2;
    b = b/2;

    ll ans = -1LL;

    if(a==b && a!=1)
    {
        ans = a;
    }
    else if(b > a)
    {
        ans = a+1;
    }
    if(ans != -1)
    {
        cout << ans << " " << ans << endl;
    }
    else cout << ans << endl;
}

int main()
{   
    ll t;
    cin >> t;

    while(t--)
    {
        ll a,b;
        cin >> a >> b;

        solve(a,b);
    }


    return 0;
}