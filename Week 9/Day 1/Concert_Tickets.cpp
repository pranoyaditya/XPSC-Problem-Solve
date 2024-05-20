#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   ll n,m;

   cin >> n >> m;

   multiset<ll , greater<ll>> priceOfTicket;

   for(ll i = 1; i<=n; i++)
   {
       ll x;
       cin >> x;
       priceOfTicket.insert(x);
   }

    ll customerPrice=0;

    
    while(m--)
    {
        cin>>customerPrice;

        auto it = priceOfTicket.lower_bound(customerPrice);

        if(it == priceOfTicket.end()) cout<<-1<<"\n";
        else
        {
            cout<<*it<<"\n";
            priceOfTicket.erase(it);
        }

    }

    return 0;

}