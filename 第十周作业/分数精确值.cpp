#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    string s;
    cin>>s;
    int pos=s.find('/');
    string x1=s.substr(0,pos);
    string y1=s.substr(pos+1);
    x=atoi(x1.c_str());
    y=atoi(y1.c_str());//返回c版本的字符串
    int div,dediv;//除数和被除数
    cout<<"0.";
    for(int i=0;i<200;i++)
    {
        dediv=10*x;
        div=y;
        cout<<dediv/div;
        x=dediv%div;
        if(x==0)
        break;//除尽了
    }
    getchar();
    getchar();
    return 0;
}
