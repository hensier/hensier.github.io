#include<stdio.h>
int ans,f[1000001];
int main()
{
    for(int i=1;i<=1000000;++i)
    {
        if(!f[i])
        {
            f[i]=1;
            long long t=i;
            int a[1001]={};
            while(t!=1)
            {
                if(t&1)t=t*3+1;
                else t>>=1;
                ++f[i];
                if(t<=1000000)
                {
                    a[f[i]]=t;
                    if(f[t])
                    {
                        f[i]+=f[t]-1;
                        break;
                    }
                }
            }
            for(int j=2;j<=f[i];++j)
            {
                if(a[j])
                {
                    f[a[j]]=f[i]-j+1;
                }
            }
        }
        if(f[i]>f[ans])ans=i;
    }
    printf("%d",ans);
    return 0;
}