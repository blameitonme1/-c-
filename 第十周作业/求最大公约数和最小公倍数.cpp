#include<bits/stdc++.h>
using namespace std;
int max1(int x,int y)
{
    int min_ = min(x,y);
    int res;
    for(int i=1;i<=min_;i++)
    {
        if(x%i==0&&y%i==0)
        res=i;
    }
    return res;
}
int min1(int x,int y)//求最小公倍数
{
    int max_=max1(x,y);
    return x*y/max_;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<max1(x,y)<<endl;
    cout<<min1(x,y)<<endl;
    getchar();
    getchar();
    return 0;
}
