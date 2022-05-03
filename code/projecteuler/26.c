#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int ans,maxn;
bool vis[10001];
int main()
{
    for(int i=3;i<1000;i+=2)
    {
        int r=1,cur=0;
        memset(vis,false,sizeof(vis));
        while(!vis[r])
        {
            vis[r]=true;
            r=r%i*10;
            ++cur;
        }
        if(cur>maxn)
        {
            ans=i;
            maxn=cur;
        }
    }
    printf("%d",ans);
    return 0;
}