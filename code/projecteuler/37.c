#include<stdio.h>
#include<stdbool.h>
#include<math.h>
const int maxn=1000000;
const int pow10[]={1,10,100,1000,10000,100000,1000000};
int ans,prime[maxn];
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
    for(int i=5;i<=prime[0];++i)
    {
        int x=prime[i],y=x;
        if(vis[x])continue;
        bool flag=true;
        while(true)
        {
            y/=10;
            if(!y)break;
            if(vis[y])
            {
                flag=false;
                break;
            }
        }
        y=x;
        while(y)
        {
            if(y<10)break;
            y%=pow10[int(log10(y))];
            if(vis[y])
            {
                flag=false;
                break;
            }
        }
        if(flag)ans+=x;
    }
    printf("%d",ans);
    return 0;
}