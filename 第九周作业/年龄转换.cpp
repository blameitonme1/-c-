#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x>=1&&x<=10)cout<<"Children"<<endl;
    else if(x>=11&&x<=20)cout<<"Teenagers"<<endl;
    else if(x>=21&&x<=40)cout<<"Youth"<<endl;
    else if(x>=41&&x<=50)cout<<"middle-aged"<<endl;
    else if(x>=51&&x<=80)cout<<"Elderly"<<endl;
    else if(x>=81&&x<=100)cout<<"Old man"<<endl;
    getchar();
    getchar();

    return 0;
}
