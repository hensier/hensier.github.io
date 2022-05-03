#include<stdio.h>
#include<stdbool.h>
const int maxn=2000000;
int prime[maxn];
bool vis[maxn];
long long ans;
void euler()
{
    for(int i=2;i<=maxn;++i)
    {
        if(!vis[i])
        {
            prime[++prime[0]]=i;
            ans+=i;
        }
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
    printf("%lld\n",ans);
    return 0;
}