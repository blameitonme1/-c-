#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    string converse(int n) {
        string ans;
        int tm;
        if(n==0)return "0";
        if(n==1)return "1";
        while(n)
        {
            int remain=abs(n%8);//余数必须表示为正数，由此以余数为导向
            ans.insert(ans.begin(),remain+'0');
            n-=remain;
            n/=8;
        }
        return ans;
    }
};
int main()
{
    int num;
    Solution s;
    cin>>num;
    cout<<s.converse(num);
    getchar();
    getchar();
    getchar();
    return 0;
}
