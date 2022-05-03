#include<stdio.h>
int sum;
int square(int x){return x*x;}
int main()
{
    for(int i=1;i<=100;++i)sum+=square(i);
    printf("%d",square((1+100)*100>>1)-sum);
    return 0;
}