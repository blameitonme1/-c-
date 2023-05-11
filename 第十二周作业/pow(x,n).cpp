#include<bits/stdc++.h>
using namespace std;
int pow(int x,int n)
{
    int j=x;
    for(int i=0;i<n-1;i++)
    x*=j;
    return x;
}
int main()
{
    int x;
    int n;
    cin>>x>>n;
    cout<<pow(x,n);
    getchar();
    getchar();
    return 0;
}
