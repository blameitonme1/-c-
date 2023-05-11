#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    reverse(s.begin(),s.end());//直接颠倒就行了，也没要求要输出十进制整数
    cout<<s;
    getchar();
    getchar();
    return 0;
}
