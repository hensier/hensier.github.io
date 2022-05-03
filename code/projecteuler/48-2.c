#include<stdio.h>
const long long mod=1e10;
long long ans;
long long mul(long long a,long long b)
{
    long long s=0;
    while(b)
    {
        if(b&1)s=(s+a)%mod;
        a=(a<<1)%mod;
        b>>=1;
    }
    return s;
}
long long power(long long a,long long b)
{
    long long s=1;
    while(b)
    {
        if(b&1)s=mul(s,a)%mod;
        a=mul(a,a)%mod;
        b>>=1;
    }
    return s;
}
int main()
{
    for(int i=1;i<=1000;++i)ans+=power(i,i);
    printf("%lld",ans%mod);
    return 0;
}