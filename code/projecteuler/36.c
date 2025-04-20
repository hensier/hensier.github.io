#include<stdio.h>
#include<stdbool.h>
int ans,d[7],b[21];
int main()
{
    for(int i=1;i<1000000;++i)
    {
        int j=i,cd=0,cb=0;
        bool flag=true;
        while(j)
        {
            d[++cd]=j%10;
            j/=10;
        }
        for(int k=1;k<=cd>>1;++k)
        {
            if(d[k]!=d[cd-k+1])
            {
                flag=false;
                break;
            }
        }
        if(!flag)continue;
        j=i;
        while(j)
        {
            b[++cb]=j&1;
            j>>=1;
        }
        for(int k=1;k<=cb>>1;++k)
        {
            if(b[k]!=b[cb-k+1])
            {
                flag=false;
                break;
            }
        }
        if(flag)ans+=i;
    }
    printf("%d",ans);
    return 0;
}