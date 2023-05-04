#include<bits/stdc++.h>
using namespace std;
int sort_(vector<int>&tm,int n)
{
    std::sort(tm.begin(),tm.end());
    return n;
}
int main()
{
    int n;
    cin>>n;
    vector<int>tm(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>tm[i];
    }
    
    sort_(tm,n);
    for(int i=0;i<n;i++)
    cout<<tm[i]<<' ';
    getchar();
    getchar();
    return 0;
}
