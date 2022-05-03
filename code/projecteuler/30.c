#include<stdio.h>
int ans;
int pow5(int x){return x*x*x*x*x;}
int main()
{
    for(int i=11;i<=500000;++i)
    {
        int j=i,t=0;
        while(j)
        {
            t+=pow5(j%10);
            j/=10;
        }
        if(i==t)ans+=i;
    }
    printf("%d",ans);
    return 0;
}