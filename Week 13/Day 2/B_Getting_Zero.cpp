#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

vector<ll> ans(32771);

void preCalculation()
{
    ans[0] = 0;

    for(ll i=1; i<32768; i++)
    {
        ll tmp = 32768 - i;
        ll n = i;
        ll count = 0LL;

        while(n != 0LL)
        {
            n = (2*n)%32768;
            count++;
        }

        ans[i] = min(tmp,count);

        for(ll j=max(0LL,i-16); j<=i-1; j++)
        {
            ans[j] = min((ll)ans[j], ans[i]+(i-j));
        }
    }
}


int main()
{

    preCalculation();

    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        cout << ans[n] << " ";
    }

    return 0;
}
// vector<int>ans(32770);

// void pre_cal(){
//     ans[0]=0;
//     in_range(i,1,32768){
//         int ans0=32768-i;
//         int n=i;
//         int cnt=0;
//         while(n!=0){
//             n=(2*n)%32768;
//             cnt++;
//         }
//         ans[i]=min(ans0,cnt);
//         in_range(j,max(0,i-16),i-1){
//             ans[j]=min(ans[j],ans[i]+(i-j));
//         }
//     }
// }



// e4{
//     pre_cal();
//     int t;                  int_in(t);
//     while(t--){
//         int n;              int_in(n);
//         int_out(ans[n]);nl;
//     }
//     checkmate
// }