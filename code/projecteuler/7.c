#include<stdio.h>
#include<stdbool.h>
const int maxn=200000;
int prime[maxn];
bool vis[maxn];
int euler(int x)
{
    for(int i=2;i<=maxn&&prime[0]<x;++i)
    {
        if(!vis[i])prime[++prime[0]]=i;
        for(int j=1;i*prime[j]<=maxn&&j<=prime[0]&&prime[0]<x;++j)
        {
            vis[i*prime[j]]=true;
            if(i%prime[j]==0)break;
        }
    }
    return prime[x];
}
int main()
{
    printf("%d",euler(10001));
    return 0;
}