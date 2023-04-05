#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string add;
    cin>>add;
    int end=add.size();
    int pos1=add.find('@');
    if(pos1!=0&&pos1!=end-1&&count(add.begin(),add.end(),'@')==1)
    {
        //cout<<'1'<<endl;
        int pos2=add.find('.');
        if(pos2!=pos1+1&&pos2!=end-1&&count(add.begin(),add.end(),'.')==1)
        {
            //cout<<'2'<<endl;
            bool digi_num=true;
            for(int i=0;i<end;i++)
            {
                if(i!=pos1&&i!=pos2)//那三个位置
                {
                    if(!isdigit(add[i])&&!isalpha(add[i]))
                    digi_num=false;
                }
            }
                  if(digi_num){
                    cout<<"yes"<<endl;
                    getchar();
                    getchar();
                    return 0;}//直接判断完成
        }

    }
    cout<<"no"<<endl;
    getchar();
    getchar();
    return 0;
}
