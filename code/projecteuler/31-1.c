#include<stdio.h>
const int value[]={0,1,2,5,10,20,50,100,200};
int dp[201][10],ans;
int main()
{
    dp[0][1]=1;
    for(int i=1;i<=200;++i)
    {
        for(int j=1;value[j]<=i;++j)
        {
            for(int k=1;k<=j;++k)
            {
                dp[i][j]+=dp[i-value[j]][k];
            }
        }
    }
    for(int i=1;i<10;++i)ans+=dp[200][i];
    printf("%d",ans);
    return 0;
}