#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>mi(101,0);//每一位的系数
    int count=0;//用0次幂来控制输入流
    int x,y;
    while(count<2)
    {
        cin>>x>>y;
        if(x==0)count++;
        mi[x]+=y;
    }
    for(int i=100;i>=0;i--)
    {
        if(mi[i]>0){
        if(i>1)
        cout<<mi[i]<<"x"<<i<<"+";
        else
        if(i==1)
        cout<<mi[i]<<"x"<<(mi[0]>0?"+":"");
        else
        {
            cout<<mi[i];
        }}
    }
    getchar();
    getchar();
    return 0;
}
