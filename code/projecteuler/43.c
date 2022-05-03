#include<stdio.h>
#include<stdbool.h>
const int p[]={2,3,5,7,11,13,17};
long long ans;
int a[10];
bool vis[10];
void dfs(int k)
{
    if(k>9)
    {
        bool flag=true;
        for(int i=1;i<=7;++i)
        {
            int x=a[i]*100+a[i+1]*10+a[i+2];
            if(x%p[i-1])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            long long x=0;
            for(int i=0;i<=9;++i)x=x*10+a[i];
            ans+=x;
        }
        return;
    }
    for(int i=0;i<=9;++i)
    {
        if(vis[i])continue;
        a[k]=i;
        vis[i]=true;
        dfs(k+1);
        vis[i]=false;
    }
}
int main()
{
    dfs(0);
    printf("%lld",ans);
    return 0;
}