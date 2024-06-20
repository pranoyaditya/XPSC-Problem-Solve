#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll n, ll m)
{
    vector<ll> ans(n+1);
    ll sum = 0;

    if(n%2 == 0 && m%2 ==0)
    {
        cout << "Yes\n";
        for(ll i=1; i<=n-2; i++)
        {
            ans[i] = 1;
            sum++;
        }

        ans[n-1] = (m-sum)/2;
        ans[n] = ans[n-1];
    }
    else if(n%2==1 and m%2==0)
    {
        cout << "Yes" <<endl;

        for(int i=1;i<=n-1;i++)
        {
            ans[i]=1;
            sum++;
        }

        ans[n]=m-sum;
    }
    else if(n%2==0 and m%2==1)
    {
        cout<< "No" << endl;;
        return;
    }
    else if(n%2==1 and m%2==1)
    {
        cout << "Yes" <<endl;

        for(int i=1;i<=n-1;i++)
        {
            ans[i]=1;
            sum++;
        }

        ans[n]=m-sum;
    }


    for(ll i=1; i<=n; i++) cout << ans[i] << " ";
    cout << endl;

}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,m;
        cin >> n >> m;

        if(n > m)
        {
            cout << "No\n";
        }
        else solve(n,m);
    }

    return 0;
}