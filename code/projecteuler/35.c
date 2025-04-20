#include<stdio.h>
#include<math.h>
#include<stdbool.h>
const int maxn=1000000;
int ans,a[7],prime[maxn];
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
    for(int i=1;i<=prime[0];++i)
    {
        int x=prime[i],y=x,n=log10(x)+1;
        bool f=true;
        for(int j=1;j<=n;++j)
        {
            a[n-j+1]=y%10;
            y/=10;
        }
        for(int j=2;j<=n;++j)
        {
            int z=0;
            for(int k=1;k<=n;++k)
            {
                int pos=j+k-1;
                if(pos>n)pos-=n;
                z=z*10+a[pos];
            }
            if(vis[z])
            {
                f=false;
                break;
            }
        }
        ans+=f;
    }
    printf("%d",ans);
    return 0;
}