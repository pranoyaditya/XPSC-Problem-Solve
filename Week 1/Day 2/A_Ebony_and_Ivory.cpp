#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string isPossibleToBreak(ll t, ll damA, ll damB, ll total)
{
    if(total%damA==0) return "Yes";
    if(total%damB == 0) return "Yes";

    while(total >= damA || total >= damB)
    {
        if(total - damA >= 0)
        {
            total -= damA;
            if(total%damB == 0)
            {
                return "Yes";
            }
        }
        else if(total-damB >= 0 )
        {
            total -= damB;
            if(total%damB == 0) return "Yes";
        }
    }

    return "No";
}

int main()
{
    ll damA,damB,total;
    cin >> damA >> damB >> total;

    cout << isPossibleToBreak(damA+damB,damA,damB,total) << endl;

    return 0;
}