#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int pos=s.size();
    string res="";
    int count=0;
    for(int i=pos-1;i>=0;i--)//考虑下标！
    {
        if(islower(s[i]))
        s[i]=toupper(s[i]);
        if(s[i]!='-')
        {
            res+=s[i];
            count++;
        }
        if(count==k)
        {
            res+="-";
            count=0;//记录分割字符
        }
    }
    reverse(res.begin(),res.end());
    if(res[0]=='-')
    res.erase(0,1);
    cout<<res;
    getchar();
    getchar();
    return 0;
}
