#include<bits/stdc++.h>
using namespace std;
class BJT
{
    public:
    int hour;
    int min;
};
int main()
{
    int n;
    cin>>n;
    int h,m;
    h=n/100;
    m=n%100;
    BJT tm;
    tm.hour=h;
    tm.min=m;
    int nh,nm;
    nh=(h-8+24)%24;//防止天数换算
    nm=m;
    if(nh==0)
    {
        cout<<nm;
    }
    else
    {
        if(nm<10)
        {
            cout<<nh<<"0"<<nm;
        }
    }
    getchar();
    getchar();
    return 0;
}
