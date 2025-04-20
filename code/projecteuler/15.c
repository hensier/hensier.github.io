#include<stdio.h>
long long f[21][21];
int main()
{
    for(int i=0;i<=20;++i)f[0][i]=f[i][0]=1;
    for(int i=1;i<=20;++i)
    {
        for(int j=1;j<=20;++j)
        {
            f[i][j]=f[i][j-1]+f[i-1][j];
        }
    }
    printf("%lld",f[20][20]);
    return 0;
}