#include<stdio.h>
#include<stdbool.h>
int last,now,ans;
int main()
{
    last=now=1;
    while(true)
    {
        int t=last;
        last=now;
        now+=t;
        if(now>4000000)break;
        if(now%2==0)ans+=now;
    }
    printf("%d",ans);
    return 0;
}