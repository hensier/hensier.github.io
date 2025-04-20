#include<bits/stdc++.h>
using namespace std;
const int maxn=100000;
int prime[maxn],composite[maxn];
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
            if(i*prime[j]&1)composite[++composite[0]]=i*prime[j];
            if(i%prime[j]==0)break;
        }
    }
    sort(composite+1,composite+composite[0]+1);
}
int binary(int l,int r,int x)
{
    while(l<=r)
    {
        int mid=(l+r)>>1;
        if(prime[mid]>x)r=mid-1;
        else l=mid+1;
    }
    return r;
}
int main()
{
    euler();
    for(int i=1;i<=composite[0];++i)
    {
        int x=composite[i];
        bool flag=false;
        for(int j=binary(1,prime[0],x);j>1;--j)
        {
            int y=prime[j],z=sqrt((x-y)>>1);
            if(z*z<<1==x-y)
            {
                flag=true;
                break;
            }
        }
        if(!flag)
        {
            printf("%d",x);
            return 0;
        }
    }
    return 0;
}