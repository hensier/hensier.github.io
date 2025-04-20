#include<bits/stdc++.h>
int ans;
struct matrix
{
    long long a[3][3];
    matrix operator*(const matrix &x)const
    {
        matrix res;
        memset(res.a,0,sizeof(res.a));
        for(int k=1;k<=2;++k)
        {
            for(int i=1;i<=2;++i)
            {
                for(int j=1;j<=2;++j)
                {
                    res.a[i][j]+=a[i][k]*x.a[k][j];
                }
            }
        }
        return res;
    }
}m,base;
int main()
{
    m.a[1][1]=m.a[1][2]=1;
    base.a[1][1]=base.a[1][2]=base.a[2][1]=1;
    while(m.a[1][1]<=4000000)
    {
        if(m.a[1][1]%2==0)ans+=m.a[1][1];
        m=m*base;
    }
    printf("%d",ans);
    return 0;
}