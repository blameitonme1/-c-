#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    vector<int>max_row(n,0);
    bool final=false;
    for(int i=0;i<n;i++){
        int max1=0;
        for(int j=0;j<n;j++){
        cin>>matrix[i][j];
        if(matrix[i][j]>max1)
        {
            max1=matrix[i][j];
            max_row[i]=j;
        }//储存每一行最大元素的下标
        }}
        for(int i=0;i<n;i++)
        {
            bool found=true;
            int j=max_row[i];
            for(int v=0;v<n;v++)
            {
                if(matrix[v][j]<matrix[i][j])
                found=false;
            }
            if(found)//找到了
            {
            cout<<i<<' '<<j;
            final=true;}
        }
        if(!final)cout<<"NO";
    getchar();
    getchar();
    return 0;
}
