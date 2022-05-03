#include<bits/stdc++.h>
using namespace std;
int cnt,a[10];
int main()
{
    for(int i=0;i<=9;++i)a[i]=i;
    while(next_permutation(a,a+10)&&++cnt<999999);
    for(int i=0;i<=9;++i)printf("%d",a[i]);
    return 0;
}