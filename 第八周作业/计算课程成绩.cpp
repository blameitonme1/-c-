#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    double daily;//平时成绩
    double final;//期末成绩
    double ultimate;//总分
};
bool cmp(student x1,student x2)//比较函数
{
    return x1.ultimate>x2.ultimate;//降序
}
int main()
{
    vector<student>tm;
    string name;
    double day,fin;
    while(cin>>name&&name!="q")//终止输入
    {
        cin>>day>>fin;
        class student tm1;
        tm1.name=name;
        tm1.daily=day;
        tm1.final=fin;
        tm1.ultimate=day*(0.4)+fin*(0.6);
        tm.push_back(tm1);
    }
    sort(tm.begin(),tm.end(),cmp);
    for(auto &x:tm)
    {
        cout<<x.name<<' '<<x.daily<<' '<<x.final<<' '<<x.ultimate<<endl;
    }
    getchar();
    getchar();
    return 0;
}
