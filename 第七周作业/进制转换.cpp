#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    string converse(int n,int x) {
        string ans;
        int tm;
        if(n==0)return "0";
        if(n==1)return "1";
        while(n)
        {
            int remain=abs(n%x);//余数必须表示为正数，由此以余数为导向
            ans.insert(ans.begin(),remain+'0');
            n-=remain;
            n/=x;
        }
        return ans;
    }
};
int main()
{
    int num,n;
    Solution s;
    cin>>n;
    int a,b;//转换数据和进制
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        cout<<s.converse(a,b)<<endl;
    }
    getchar();
    getchar();
    getchar();
    return 0;
}
