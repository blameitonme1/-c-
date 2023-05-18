#include<bits/stdc++.h>
using namespace std;
int my_strstr(string a,string b)
{
    int m = a.size();
    int n = b.size();
    for(int i = 0;i < m;i++)
    {
        bool y = true;
        for(int j = i,c = 0;j < i + n&&j < m;j++,c++)
        {
            //cout<<a[j]<<' '<<b[c]<<endl;
            if(a[j]!=b[c]){
            y = false;
            break;}
        }
        if(y == true)
        return i;
    }
    return -1;
}
int main()
{
    string a= "abca";
    string b = "bc";
    cout<<my_strstr(a,b);
    getchar();
    getchar();
    return 0;
}
