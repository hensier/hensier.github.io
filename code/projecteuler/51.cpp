#include<bits/stdc++.h>
using namespace std;
const int maxn=1000000;
int a[7],ans=1<<30,prime[maxn];
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
    for(int i=2,j=11;i<=6;++i,j*=11)
    {
        for(int k=j;k<j*11;++k)
        {
            int kk=k;
            bool flag=false;
            for(int l=i;l;--l)
            {
                a[l]=kk%11;
                flag|=(a[l]==10);
                kk/=11;
            }
            if(!flag)continue;
            int cnt=0,x;
            for(int l=9;l>=0;--l)
            {
                if(!l&&a[1]==10)break;
                x=0;
                for(int m=1;m<=i;++m)x=(x<<3)+(x<<1)+(a[m]==10?l:a[m]);
                cnt+=(!vis[x]);
            }
            if(cnt==8)ans=min(ans,x);
        }
        if(ans!=1<<30)break;
    }
    printf("%d",ans);
    return 0;
}