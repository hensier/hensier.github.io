#include<stdio.h>
#include<stdbool.h>
int ans=1<<30;
bool check(int l,int r,int x)
{
    while(l<=r)
    {
        int mid=(l+r)>>1,tmp=mid*(3*mid-1);
        if(tmp==x)return true;
        if(tmp>x)r=mid-1;
        else l=mid+1;
    }
    return false;
}
int main()
{
    for(int i=1;i<=10000;++i)
    {
        for(int j=1;j<i;++j)
        {
            int pi=i*(i*3-1),pj=j*(j*3-1);
            if(check(1,i<<1,pi+pj)&&check(1,i,pi-pj)&&pi-pj<ans)ans=pi-pj;
        }
    }
    printf("%d",ans>>1);
    return 0;
}