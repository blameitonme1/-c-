#include<bits/stdc++.h>
using namespace std;
bool even(int n)
{
    return n%2==0;//判断奇偶性
}
int main()
{
    vector<int>tm;
    int c;
    do
    {
       cin>>c;
       if(!even(c))
       tm.push_back(c);
    } while (c>0);
    int res = accumulate(tm.begin(),tm.end(),0);//求累计和
    cout<<res<<endl;
    getchar();
    getchar();
    return 0;
}
