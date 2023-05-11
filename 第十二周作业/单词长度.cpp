#include<bits/stdc++.h>
using namespace std;
int main()
{
    string res;
    char res_[500];
    cin.getline(res_,500);
    res=res_;
    int len=0;
    for(int i=0;i<res.size();i++)
    {
        if(res[i]!=' ')
        len++;
        else
        {
            cout<<len<<' ';
            len=0;
        }
    }
    cout<<len-1;//减去了
    getchar();
    getchar();
    return 0;
}
