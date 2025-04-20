#include<stdio.h>
#include<stdbool.h>
const int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int ans,d=1;
int main()
{
    for(int m=1;m<=12;++m)d=(d+days[m])%7;
    for(int y=1901;y<=2000;++y)
    {
        for(int m=1;m<=12;++m)
        {
            if(!d)++ans;
            d=(d+days[m]+(m==2&&((bool)(y&3)^true)))%7;
        }
    }
    printf("%d",ans);
    return 0;
}