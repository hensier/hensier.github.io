#include<stdio.h>
int fac(int x)
{
    if(x==1)return 1;
    int s=2;
    for(int i=2;i*i<=x;++i)
    {
        if(x%i==0)
        {
            ++s;
            if(i*i!=x)++s;
        }
    }
    return s;
}
int main()
{
    for(int i=1,x=1;;++i,x+=i)
    {
        if(fac(x)>500)
        {
            printf("%d",x);
            return 0;
        }
    }
    return 0;
}