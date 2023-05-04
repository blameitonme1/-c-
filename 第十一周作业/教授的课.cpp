#include<bits/stdc++.h>
using namespace std;
bool is_cancel(vector<int>a,int n,int k)
{
    int count=0;
    for(auto &x:a)
    {
        if(x>0)
        count++;
    }
    return count>k;
}
int main()
{
    int N,K;
    cin>>N>>K;
    vector<int>stu(N,0);
    for(int i=0;i<N;i++)
    {
        cin>>stu[i];
    }
    if(is_cancel(stu,N,K))
    cout<<"YES";
    else
    cout<<"NO";
    getchar();
    getchar();
    return 0;
}
