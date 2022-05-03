#include<stdio.h>
#include<stdbool.h>
int ans,a[10];
bool vis[10],flag[10000];
void dfs(int k)
{
    if(k>9)
    {
        for(int i=1;i<=2;++i)
        {
            int m1=0;
            for(int j=1;j<=i;++j)m1=m1*10+a[j];
            for(int j=i;j<=5-i;++j)
            {
                int m2=0,p=0;
                for(int k=i+1;k<=i+j;++k)m2=m2*10+a[k];
                for(int k=i+j+1;k<=9;++k)p=p*10+a[k];
                if(m1*m2==p&&!flag[p])
                {
                    flag[p]=true;
                    ans+=p;
                }
            }
        }
        return;
    }
    for(int i=1;i<=9;++i)
    {
        if(vis[i])continue;
        a[k]=i;
        vis[i]=true;
        dfs(k+1);
        vis[i]=false;
    }
}
int main()
{
    dfs(1);
    printf("%d",ans);
    return 0;
}