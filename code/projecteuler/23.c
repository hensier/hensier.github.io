#include<stdio.h>
#include<stdbool.h>
int ans;
bool a[30001];
int fac(int x)
{
    if(x==1)return 1;
    int s=1;
    for(int i=2;i*i<=x;++i)
    {
        if(x%i==0)
        {
            s+=i;
            if(i*i!=x)s+=x/i;
        }
    }
    return s;
}
int main()
{
    for(int i=1;i<=28123;++i)a[i]=fac(i)>i;
    for(int i=1;i<=28123;++i)
    {
        bool flag=false;
        for(int j=1;j<=i>>1;++j)
        {
            if(a[j]&a[i-j])
            {
                flag=true;
                break;
            }
        }
        if(!flag)ans+=i;
    }
    printf("%d",ans);
    return 0;
}