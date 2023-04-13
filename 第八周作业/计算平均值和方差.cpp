#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int u=0;u<N;u++)
    {
    vector<double>tm(6);
    double sum=0;
    for(int i=0;i<6;i++)
    {
        cin>>tm[i];
        sum+=tm[i];
    }
    double ave=sum/6.00;//平均值
    //cout<<sum<<' '<<ave;
    double x2=0;//方差
    for(auto x:tm)
    {
        x2+=(x-ave)*(x-ave);
    }
    x2/=6;//方差计算完成
    printf("%1.2lf %1.2lf\n",ave,x2);
    }
    getchar();
    getchar();
    return 0;
}
