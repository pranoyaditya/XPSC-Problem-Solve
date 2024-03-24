#include <bits/stdc++.h>
using namespace std;

int findLength()
{
    int n;
    cin >> n;

    set<int> s;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    if( (n-s.size())%2 == 0) return s.size();
    else return (s.size()-1);

}

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        cout << findLength() << endl;
    }

    return 0;
}