#include<iostream>
#include<vector>
using namespace std;
void print(vector<vector<int>>&x,int num)
{
    for(int i=0;i<num;i++)
    {
        for(int m=0;m<x[i].size();m++)
        {
            cout<<x[i][m]<<' ';
        }
        cout<<endl;
    }
    return ;
}
int main()
{
    vector<vector<int>> tri;
    int N;
    cin>>N;
    tri.push_back({1});
    tri.push_back({1,1});
    for(int i=2;i<=15;i++)
    {
        vector<int> tm=vector<int>(i+1);//有i个元素
        tm[0]=tm[i]=1;
        for(int m=1;m<i;m++)
        {
            tm[m]=tri[i-1][m]+tri[i-1][m-1];
        }
        tri.push_back(tm);
    }
    int num;
    for(int i=0;i<N;i++)
    {
        cin>>num;
        print(tri,num);
    }
    getchar();
    getchar();
    return 0;
}
