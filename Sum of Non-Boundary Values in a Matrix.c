#include<stdio.h>
int main()
{
    int x,y,i,j;
    scanf("%d%d",&x,&y);
    int a[x][y];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int s=0;
    int b=0,c=0,d=0,e=0,t=0;
    for(i=0;i<x;i++){
        b+=a[i][0];
        c+=a[i][y-1];
    }
    for(j=0;j<y;j++){
        d+=a[0][j];
        e+=a[x-1][j];
    }int f=a[0][y-1]+a[x-1][0]+a[x-1][y-1]+a[0][0];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
           s+=a[i][j];
        }
    }
    t=b+c+d+e-(f);
    printf("%d",s-t);
}