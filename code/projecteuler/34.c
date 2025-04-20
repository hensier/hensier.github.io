#include<stdio.h>
const int fac[]={1,1,2,6,24,120,720,5040,40320,362880};
int ans;
int main()
{
    for(int i=10;i<=362880;++i)
    {
        int j=i,s=0;
        while(j)
        {
            s+=fac[j%10];
            j/=10;
        }
        if(s==i)ans+=i;
    }
    printf("%d",ans);
    return 0;
}