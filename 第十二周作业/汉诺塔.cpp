#include<bits/stdc++.h>
using namespace std;
int countStep=0;//全局变量用来计数
void movedisk(int n,char a,char b)
{
        countStep++;
        cout<<"Step"<<countStep<<": Move Disk"<<n<<" from "<<a<<" to "<<b<<endl;
}
void hanoi(const int n, const char A,const  char B,const char C) {
        if (n == 1) {
            movedisk(n,A,C);
        } else {
            hanoi(n - 1, A, C, B);//将n-1个盘子由A经过C移动到B
            movedisk(n,A, C);             //执行最大盘子n移动
            hanoi(n - 1, B, A, C);//剩下的n-1盘子，由B经过A移动到C
        }
}
int main()
{
    int n;
    cin>>n;
    hanoi(n,'A','B','C');
    getchar();
    getchar();
    return 0;
}
