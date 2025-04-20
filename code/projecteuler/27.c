#include<stdio.h>
#include<stdbool.h>
int maxn,ans;
bool prime(int x)
{
    if(x<2)return false;
    if(x==2||x==3||x==5)return true;
    if(x%2==0||x%3==0||x%5==0)return false;
    for(int a=7,b=11;a*a<=x;a+=6,b+=6)if(x%a==0||x%b==0)return false;
    return true;
}
int main()
{
    for(int a=-999;a<=999;++a)
    {
        for(int b=-1000;b<=1000;++b)
        {
            int n=0;
            while(prime(n*n+a*n+b))++n;
            if(n>maxn)
            {
                maxn=n;
                ans=a*b;
            }
        }
    }
    printf("%d",ans);
    return 0;
}