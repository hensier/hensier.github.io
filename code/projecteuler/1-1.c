#include<stdio.h>
int ans;
int main()
{
    for(int i=3;i<1000;i+=3)ans+=i;
    for(int i=5;i<1000;i+=5)ans+=i;
    for(int i=15;i<1000;i+=15)ans-=i;
    printf("%d",ans);
    return 0;
}