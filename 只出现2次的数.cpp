#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>p;
    int g;
    map<int,int>tm;
    for(int i=0;i<n;i++){
        cin>>g;
        p.push_back(g);
        tm[g]++;
    }
    for(map<int,int>::iterator i=tm.begin();i!=tm.end();i++)
    {
        if((*i).second==2)//出现两次
        cout<<(*i).first<<' ';//输出键值。
    }
    getchar();
    getchar();
    return 0;
}
