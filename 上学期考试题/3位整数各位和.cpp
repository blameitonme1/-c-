#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,d,e;
    cin>>a;
    b=a%10;
    c=a/10%10;
    d=a/100;
    cout<<b+c+d;
    return 0;
}
