#include<stdio.h>
struct fraction
{
    int n,d;
}ans;
int gcd(int a,int b)
{
    while(b)
    {
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}
int main()
{
    ans.n=ans.d=1;
    for(int i=1;i<=9;++i)
    {
        for(int j=i+1;j<=9;++j)
        {
            for(int k=i+1;k<=9;++k)
            {
                int n=i*10+j,d=j*10+k;
                if(n*k==d*i)
                {
                    ans.n*=n;
                    ans.d*=d;
                }
            }
        }
    }
    printf("%d",ans.d/gcd(ans.n,ans.d));
    return 0;
}