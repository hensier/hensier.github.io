#include<stdio.h>
int ans=1;
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
int lcm(int a,int b){return a/gcd(a,b)*b;}
int main()
{
    for(int i=1;i<=20;++i)ans=lcm(ans,i);
    printf("%d",ans);
    return 0;
}