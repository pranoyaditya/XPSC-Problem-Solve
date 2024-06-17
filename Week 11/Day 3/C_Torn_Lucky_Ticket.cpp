#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1e9+7;

ll digit_sum(string st) 
{
    ll sum = 0;

    for (char ch : st) 
    {
        sum += ch - '0';
    }

    return sum;
}

ll solve(ll n, vector<string>&v)
{
    ll ans = 0;

    vector<vector<int>> cnt(6, vector<int>(46, 0));

    for (auto val : v) 
    {
        int length = val.length();
        int sum = digit_sum(val);
        cnt[length][sum]++;
    }

    
    for (auto val : v) 
    {
        for (ll lenr = val.length() % 2; lenr <= val.length(); lenr += 2) 
        {
            ll l = val.length() + lenr;
            ll suml = digit_sum(val.substr(0, l / 2));
            ll sumr = digit_sum(val.substr(l / 2));

            if (suml - sumr >= 0) 
            {
                ans += cnt[lenr][suml - sumr];
            }
        }
    }


    for (auto val : v) 
    {
        for (int lenl = val.length() % 2; lenl < val.length(); lenl += 2) 
        {
            ll l = val.length() + lenl;
            ll suml = digit_sum(val.substr(val.length() - l / 2));
            ll sumr = digit_sum(val.substr(0, val.length() - l / 2));

            if (suml - sumr >= 0) 
            {
                ans += cnt[lenl][suml - sumr];
            }
        }
    }

    return ans;

}

int main()
{
    ll n;
    cin >> n;

    vector<string> v(n);

    for(ll i=0; i<n; i++)
    {
        cin >> v[i];
    }

    cout << solve(n,v) << endl;

    return 0;
}

