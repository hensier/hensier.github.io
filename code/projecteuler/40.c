#include<stdio.h>
#include<math.h>
const int a[]={1,10,100,1000,10000,100000,1000000};
int cnt,ans=1;
int main()
{
    for(int i=1,x=0;x<=1000000;++i)
    {
        int len=log10(i)+1,j=i;
        x+=len;
        if(x>=a[cnt])
        {
            for(int k=0;k<x-a[cnt];++k)j/=10;
            ans*=j%10;
            ++cnt;
        }
    }
    printf("%d",ans);
    return 0;
}