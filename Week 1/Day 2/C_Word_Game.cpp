#include <bits/stdc++.h>
using namespace std;

void ouput_points(int n)
{
    map<string,int> mp1;
    map<string,int> mp2;
    map<string,int> mp3;

    vector<string> f;
    vector<string> s;
    vector<string> t;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<n; j++)
        {
            string st;
            cin >> st;

            if(i==0)
            {
                mp1[st]++;
                f.push_back(st);
            }
            else if(i==1)
            {
                mp2[st]++;
                s.push_back(st);
            }
            else
            {
                mp3[st]++;
                t.push_back(st);
            }
        }
    }

    int point1=0,point2=0,point3=0;

    for(auto st : f)
    {
        if(mp1[st]>0 && mp2[st]>0 && mp3[st]>0)
        {
            continue;
        }
        else if(mp1[st]>0 && mp2[st]>0)
        {
            point1++;
            point2++;
        }
        else if(mp1[st]>0 && mp3[st]>0)
        {
            point1++;
            point3++;
        }
        else point1 += 3;
    }

    for(auto st : s)
    {
        if(mp1[st]>0 && mp2[st]>0 && mp3[st]>0)
        {
            continue;
        }
        else if(mp2[st]>0 && mp3[st]>0)
        {
            point2++;
            point3++;
        }
        else if(mp2[st]>0 && mp1[st] ==0 && mp3[st]==0)
        {
            point2 += 3;
        }
    }

    for(auto st : t)
    {
        if(mp1[st]>0 && mp2[st]>0 && mp3[st]>0)
        {
            continue;
        }
        else if(mp2[st] == 0 && mp1[st] == 0 && mp3[st]>0)
        {
            point3 += 3;
        }
    }


    cout << point1 << " " << point2 << " " << point3 << endl;
}

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        int n;
        cin >> n;
        
        ouput_points(n);
    }

    return 0;
}