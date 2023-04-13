#include<bits/stdc++.h>
using namespace std;
bool judge(int num)
{
    int num1=num;
    int remain=0;
    while(num1!=0)
    {
        remain=remain*10+num1%10;
        num1/=10;
    }
    return remain==num;
}
int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int m,k;
        cin>>m>>k;
        int count=0;
        for(int x=m+1;count<k;x++)
        {
            if(judge(x)){
                count++;
                cout<<x<<' ';}
        }
        cout<<endl;
    }
    getchar();
    getchar();
    return 0;
}
