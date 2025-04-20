#include<bits/stdc++.h>
using namespace std;
const int maxn=10000;
int cnt,prime[maxn],a[5],b[5],ans[5];
bool vis[maxn],flag[5];
void euler()
{
    vis[0]=vis[1]=true;
    for(int i=2;i<=maxn;++i)
    {
        if(!vis[i])prime[++prime[0]]=i;
        for(int j=1;i*prime[j]<=maxn&&j<=prime[0];++j)
        {
            vis[i*prime[j]]=true;
            if(i%prime[j]==0)break;
        }
    }
}
void dfs(int k)
{
    if(k>4)
    {
        int x=0;
        for(int i=1;i<=4;++i)x=x*10+a[b[i]];
        if(!vis[x])ans[++cnt]=x;
        return;
    }
    for(int i=1;i<=4;++i)
    {
        if(flag[i])continue;
        b[k]=i;
        flag[i]=true;
        dfs(k+1);
        flag[i]=false;
    }
}
int main()
{
    euler();
    for(int i=1000;i<10000;++i)
    {
        a[1]=i/1000;
        a[2]=i/100%10;
        a[3]=i/10%10;
        a[4]=i%10;
        if(!a[1]||!a[2]||!a[3]||!a[4])continue;
        memset(flag,false,sizeof(flag));
        cnt=0;
        dfs(1);
        sort(ans+1,ans+cnt+1);
        cnt=unique(ans+1,ans+cnt+1)-ans-1;
        for(int j=1;j<=cnt;++j)
        {
            if(ans[j]==1487)continue;
            for(int k=j+1;k<=cnt;++k)
            {
                for(int l=k+1;l<=cnt;++l)
                {
                    if(ans[l]-ans[k]==ans[k]-ans[j])
                    {
                        printf("%d%d%d",ans[j],ans[k],ans[l]);
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}