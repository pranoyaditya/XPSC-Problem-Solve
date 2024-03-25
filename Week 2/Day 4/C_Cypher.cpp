#include <bits/stdc++.h>
using namespace std;

void find_initial_code(vector<int>&numbers, vector<string>&directions, int n)
{
    vector<int> ans;

    for(int i=0; i<n; i++)
    {
        int start = numbers[i];
        string st = directions[i];

        for(int i=0; i<st.size(); i++)
        {
            if(st[i] == 'U')
            {
                if(start == 0) start = 9;
                else start--;
            }
            else 
            {
                if(start == 9) start = 0;
                else start++;
            }
        }

        ans.push_back(start);
    }

    for(int val : ans) cout << val << " ";
    cout << endl;
}

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        int n;
        cin >> n;

        vector<int> numbers(n);
        for(int i=0; i<n; i++)
        {
            cin >> numbers[i];
        }

        vector<string> directions(n);
        int sz;
        for(int i=0; i<n; i++)
        {
            cin >> sz;
            cin >> directions[i];
        }

        find_initial_code(numbers,directions,n);
    }
    return 0;
}