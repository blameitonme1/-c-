#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int pos;
    pos=s2.find(s1);
    if(pos==s2.npos)
    {
        cout<<"-1";
        getchar();
        return 0;
    }
    vector<int>tm;
    while(pos!=s2.npos)
    {
        tm.push_back(pos);
        pos=s2.find(s1,pos+1);//从后面开始找
    }
    for(int x:tm)
    cout<<x<<' ';
    getchar();
    getchar();
    return 0;
}
