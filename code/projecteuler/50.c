#include<stdio.h>
#include<stdbool.h>
const int maxn=1000000;
int cnt,ans,maxl,prime[maxn];
long long s[maxn];
bool vis[maxn];
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
int main()
{
    euler();
    s[1]=prime[1];
    for(int i=2;i<=prime[0];++i)
    {
        s[i]=s[i-1]+prime[i];
        if(s[i]>1000000)
        {
            cnt=i;
            break;
        }
    }
    for(int i=1;i<=cnt;++i)
    {
        int sum=0;
        for(int j=i+maxl+1;j<=cnt&&s[j]-s[i-1]<=maxn;++j)
        {
            if(!vis[s[j]-s[i-1]])
            {
                maxl=j-i;
                ans=s[j]-s[i-1];
            }
        }
    }
    printf("%d",ans);
    return 0;
}