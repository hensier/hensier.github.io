#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int ans,a[10];
bool vis[10];
bool prime(int x)
{
    if(x<2)return false;
    if(x==2||x==3||x==5)return true;
    if(x%2==0||x%3==0||x%5==0)return false;
    for(int a=7,b=11;a*a<=x;a+=6,b+=6)if(x%a==0||x%b==0)return false;
    return true;
}
void dfs(int k,int n)
{
    if(k>n)
    {
        int x=0;
        for(int i=1;i<=n;++i)x=x*10+a[i];
        if(prime(x)&&x>ans)ans=x;
        return;
    }
    for(int i=1;i<=n;++i)
    {
        if(vis[i])continue;
        a[k]=i;
        vis[i]=true;
        dfs(k+1,n);
        vis[i]=false;
    }
}
int main()
{
    for(int i=1;i<=9;++i)
    {
        memset(vis,false,sizeof(vis));
        dfs(1,i);
    }
    printf("%d",ans);
    return 0;
}