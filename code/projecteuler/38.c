#include<stdio.h>
#include<stdbool.h>
int main()
{
    for(int i=9999;i;--i)
    {
        for(int j=2;;++j)
        {
            int a[10]={},b[10]={};
            for(int k=1;k<=j;++k)
            {
                int x=i*k;
                b[k]=x;
                while(x)
                {
                    ++a[x%10];
                    x/=10;
                }
            }
            bool flag=true;
            int cnt=a[0];
            for(int k=1;k<10;++k)
            {
                cnt+=a[k];
                if(a[k]!=1)flag=false;
            }
            if(cnt>9)break;
            if(flag)
            {
                for(int k=1;k<=j;++k)printf("%d",b[k]);
                return 0;
            }
        }
    }
    return 0;
}