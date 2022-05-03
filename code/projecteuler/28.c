#include<stdio.h>
int x=501,y=501,cnt,d=-1,ans,a[1005][1005];
const int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
int main()
{
    while(cnt<=1002001)
    {
        a[x][y]=++cnt;
        d=(d+1)%4;
        int nx=x+dx[d],ny=y+dy[d];
        if(nx<1||ny<1||nx>1001||ny>1001||a[nx][ny])
        {
            d=(d+3)%4;
            x+=dx[d],y+=dy[d];
        }
        else x=nx,y=ny;
    }
    for(int i=1;i<=1001;++i)ans+=a[i][i]+a[i][1002-i];
    printf("%d",ans-1);
    return 0;
}