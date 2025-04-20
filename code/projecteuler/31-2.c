#include<stdio.h>
const int value[]={0,1,2,5,10,20,50,100,200};
int dp[201],ans;
int main()
{
    dp[0]=1;
    for(int i=1;i<=8;++i)
    {
        for(int j=value[i];j<=200;++j)
        {
            dp[j]+=dp[j-value[i]];
        }
    }
    printf("%d",dp[200]);
    return 0;
}