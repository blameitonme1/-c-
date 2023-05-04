#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>tm={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    string s;
    cin>>s;
    for(char x:s)
    cout<<tm[x-'A'];//对应关系，打个表完了
    getchar();
    getchar();
    return 0;
}
