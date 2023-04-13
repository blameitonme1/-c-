#include<bits/stdc++.h>
using namespace std;
int diameter(int x)
{
    return 2*x;
}
double C(int x)
{
    return ((double)diameter(x))*(3.14);
}
double S(int x)
{
    return (double)x*(double)x*(3.14);
}
int main()
{
    int r;
    cin>>r;
    cout<<endl<<"直径为"<<diameter(r)<<endl;
    cout<<"周长="<<C(r)<<endl;
    cout<<"面积="<<S(r)<<endl;
    getchar();
    getchar();
    return 0;
}
