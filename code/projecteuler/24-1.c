#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int a[10],cnt;
bool b[10];
void dfs(int k)
{
    if(k>9)
    {
        if(++cnt==1000000)
        {
            for(int i=0;i<10;++i)printf("%d",a[i]);
            exit(0);
        }
        return;
    }
    for(int i=0;i<10;++i)
    {
        if(b[i])continue;
        a[k]=i;
        b[i]=true;
        dfs(k+1);
        b[i]=false;
    }
}
int main()
{
    dfs(0);
    return 0;
}