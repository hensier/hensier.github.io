#include<bits/stdc++.h>
using namespace std;
string s[6001],t;
int n,ans;
bool read(string &s)
{
    char ch=getchar();
    if(ch==EOF)return false;
    while(ch<'A'||ch>'Z')
    {
        ch=getchar();
        if(ch==EOF)return false;
    }
    s=ch;
    while(true)
    {
        ch=getchar();
        if(ch<'A'||ch>'Z')break;
        s+=ch;
    }
    return true;
}
int main()
{
    freopen("p022_names.txt","r",stdin);
    while(read(t))s[++n]=t;
    sort(s+1,s+n+1);
    for(int i=1;i<=n;++i)
    {
        int x=0;
        for(int j=0;s[i][j];++j)x+=s[i][j]-'A'+1;
        ans+=x*i;
    }
    printf("%d",ans);
    return 0;
}