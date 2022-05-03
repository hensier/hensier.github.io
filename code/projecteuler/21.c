#include<stdio.h>
int ans,d[10001];
int main()
{
    for(int i=1;i<=10000;++i)
    {
        for(int j=i<<1;j<=10000;j+=i)
        {
            d[j]+=i;
        }
    }
    for(int i=1;i<=10000;++i)
    {
        if(d[i]<=10000&&d[d[i]]==i&&d[i]!=i)
        {
            ans+=i;
        }
    }
    printf("%d",ans);
    return 0;
}