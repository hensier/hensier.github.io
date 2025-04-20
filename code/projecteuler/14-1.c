#include<stdio.h>
int ans,maxn;
int main()
{
    for(int i=1;i<=1000000;++i)
    {
        int x=1;
        long long t=i;
        while(t!=1)
        {
            if(t&1)t=t*3+1;
            else t>>=1;
            ++x;
        }
        if(x>maxn)
        {
            ans=i;
            maxn=x;
        }
    }
    printf("%d",ans);
    return 0;
}