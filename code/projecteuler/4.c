#include<stdio.h>
int main()
{
    for(int i=9;i;--i)
    {
        for(int j=9;j>=0;--j)
        {
            for(int k=9;k>=0;--k)
            {
                int x=i*100000+j*10000+k*1000+k*100+j*10+i;
                for(int p=100;p<=999;++p)
                {
                    if(x%p)continue;
                    int q=x/p;
                    if(q>=100&&q<1000)
                    {
                        printf("%d",x);
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}