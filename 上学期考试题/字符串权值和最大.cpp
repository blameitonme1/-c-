#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

int N,maxn,minn,ans=0;
int app[30]; 
char a[1000010];

int main()
{
    freopen("a.in","r",stdin);
    freopen("a.out","w",stdout);
    scanf("%d",&N);
    scanf("%s",a);
    for(int i=0;i<N;++i)
    {
        memset(app,0,sizeof(app));
        maxn=minn=a[i]-'a';
        ++app[a[i]-'a'];
        for(int j=i+1;j<N;++j)
        {
            int k=a[j]-'a';
            ++app[k];
            if(maxn==k&&minn!=k) maxn=k;
            else 
            {
                swap(maxn,minn);
                for(int e=0;e<26;++e)
                if(app[e])
                {
                    if(app[e]>app[maxn]) maxn=e;
                    if(app[e]<app[minn]) minn=e;
                }
            }   
            ans=max(ans,app[maxn]-app[minn]);
        }
    }
    printf("%d",ans);
    return 0;
}
