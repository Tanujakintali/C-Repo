#include<stdio.h>
int  main()
{
    int x,y,i,j;
    scanf("%d%d",&x,&y);
    int a[x][y];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int r[x];
    for(i=0;i<x;i++){
        r[i]=0;
    }
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            r[i]+=a[i][j];
        }
    }
    int max=0;
    for(i=0;i<x;i++){
        if(max<r[i]){
            max=r[i];
        }
    }
    printf("%d",max);
}