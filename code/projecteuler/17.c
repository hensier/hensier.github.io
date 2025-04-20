#include<stdio.h>
int ans,a[1001]={0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8};
void init()
{
    a[20]=a[30]=6;
    a[40]=a[50]=a[60]=5;
    a[70]=7;
    a[80]=a[90]=6;
    a[1000]=11;
    for(int i=20;i<100;++i)
    {
        if(i%10==0)continue;
        a[i]=a[i/10*10]+a[i%10];
    }
}
int main()
{
    init();
    for(int i=1;i<=1000;++i)
    {
        if(a[i])ans+=a[i];
        else if(i%100)ans+=a[i/100]+10+a[i%100];
        else ans+=a[i/100]+7;
    }
    printf("%d",ans);
    return 0;
}