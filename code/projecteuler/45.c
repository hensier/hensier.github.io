#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool check(long long l,long long r,long long x)
{
    while(l<=r)
    {
        long long mid=(l+r)>>1,tmp=mid*(mid*3-1);
        if(tmp==x)return true;
        if(tmp>x)r=mid-1;
        else l=mid+1;
    }
    return false;
}
int main()
{
    for(int i=144;;++i)
    {
        long long x=2LL*i*((i<<1)-1);
        if(check(1,sqrt(x),x))
        {
            printf("%lld",x>>1);
            return 0;
        }
    }
    return 0;
}