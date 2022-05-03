#include<bits/stdc++.h>
using namespace std;
const int maxn=1000000;
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
            composite[++composite[0]]=i*prime[j];
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
    return r-1;
}
bool check(int x)
{
    if(!vis[x])return false;
    int cnt=0,tmp=0;
    for(int i=binary(1,x,x);i;--i)
    {
        bool flag=false;
        while(x%prime[i]==0)
        {
            flag=true;
            x/=prime[i];
        }
        cnt+=flag;
        if(cnt==4)return x==1;
    }
    return false;
}
int main()
{
    euler();
    for(int i=1;i<=composite[0];++i)
    {
        int x=composite[i];
        if(check(x)&&check(x+1)&&check(x+2)&&check(x+3))
        {
            printf("%d",x);
            return 0;
        }
    }
    return 0;
}