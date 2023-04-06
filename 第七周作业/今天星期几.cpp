#include<iostream>
#include<vector>
#include<string>
#include<regex>
using namespace std;
class Solution {
public:
        int check_leap(int year)//检测是否·为闰年
    {
        if((year%4==0&&year%100!=0)||year%400==0)
        return 366;
        else
        return 365;

    }   
    int day_break(int y,int m,int d)
    {
        if(m==1||m==2)
        {
            y--;m+=12;
        }
        int W= (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
    }
    string converse_date(string &x) {
        string ans;
        std::regex regex(R"(\d+)");// 正则表达式
        vector<int> tm(3);
    std::smatch match;
    int i=0;
    while (std::regex_search(x, match, regex)) {
        tm[i++]=std::stoi(match.str());
        x = match.suffix();
    }
    //cout<<tm[0]<<' '<<tm[1]<<' '<<tm[2]<<' ';
    long long x1=day_break(tm[0],tm[1],tm[2]);//日期差
    vector<string>c={"Monday","Tuseday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    ans=c[x1-1];
        return ans;
    }
};
int main()
{
    string x;
    Solution s;
    cin>>x;
        cout<<s.converse_date(x)<<endl;
    getchar();
    getchar();
    getchar();
    return 0;
}
