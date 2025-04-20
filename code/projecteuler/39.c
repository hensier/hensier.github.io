#include<stdio.h>
int maxp,maxn;
int main()
{
    for(int p=12;p<=1000;++p)
    {
        int s=0;
        for(int a=3;a<=p/3;++a)
        {
            for(int b=a+1;b<=p;++b)
            {
                int c=p-a-b;
                if(a*a+b*b==c*c&&c>b)++s;
            }
        }
        if(s>maxn)
        {
            maxn=s;
            maxp=p;
        }
    }
    printf("%d",maxp);
    return 0;
}