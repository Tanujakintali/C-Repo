#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int a[x][y];
    int i,j;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b=0,c=0,d=0,e=0;
    for(i=0;i<x;i++){
        b+=a[i][0];
        c+=a[i][y-1];
    }
    for(j=0;j<y;j++){
        d+=a[0][j];
        e+=a[x-1][j];
    }
    int f=a[0][0]+a[x-1][0]+a[0][y-1]+a[x-1][y-1];
    printf("%d",b+c+d+e-f);
}