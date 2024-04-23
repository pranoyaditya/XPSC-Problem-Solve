#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll n, char start, char end, vector<pair<char,ll>>&v)
{
    
    sort(v.begin(),v.end());


    vector<ll> ans;
    ll cost = 0;

    if(start <= end)
    {
        ll i = 0;

        while(v[i].first != start)
        {
            i++;
        }

        ans.push_back(v[i].second);
        i++;

        while(i<n && v[i].first <= end)
        {
            ll index1 = v[i].second;
            char ch1 = v[i].first;

            char ch2 = v[i-1].first;

            cost += ((ch1-'a') - (ch2-'a'));

            ans.push_back(index1);

            i++;

        }
    }
    else
    {
        ll i = n-1;
        while(v[i].first != start)
        {
            i--;
        }

        ans.push_back(v[i].second);
        i--;

        while(i>=0 && v[i].first >= end)
        {
            ll index1 = v[i].second;
            char ch1 = v[i].first;

            char ch2 = v[i+1].first;

            cost += ((ch2-'a') - (ch1-'a'));
            ans.push_back(index1);

            i--;
        }

    }

    ll limit = ans.size();

    if(ans[0] != 0)
    {

        for(ll i=1; i<limit; i++)
        {
            if(ans[i] == 0)
            {
                swap(ans[0],ans[i]);
                break;
            }
        }
    }

    if(ans[limit-1] != n-1)
    {
        for(ll i=limit-1; i>=0; i--)
        {
            if(ans[i] == n-1)
            {
                swap(ans[i],ans[limit-1]);
                break;
            }
        }
    }

    cout << cost << " " << ans.size() << "\n";
    for(auto val : ans) cout << val+1 <<  " ";
    cout << "\n";
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        string st;
        cin >> st;

        vector<pair<char,ll>> v;
        char start = st[0];
        char end = st[st.size()-1];

        for(ll i=0; i<st.size(); i++)
        {
            v.push_back({st[i],i});
        }

        solve(v.size(),start,end,v);
    }

    return 0;
}