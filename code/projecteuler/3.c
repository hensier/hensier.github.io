#include<stdio.h>
long long n=600851475143;
int main()
{
    for(long long i=3;i*i<=n;i+=2)
    {
        while(n%i==0)
        {
            n/=i;
            if(n==1)
            {
                printf("%lld",i);
                return 0;
            }
        }
    }
    printf("%lld",n);
    return 0;
}