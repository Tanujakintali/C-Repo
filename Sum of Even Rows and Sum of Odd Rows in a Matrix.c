#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int i,j;
    int a[x][y];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int es=0,os=0;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            if(i%2==0){
                es+=a[i][j];
            }else{
                os+=a[i][j];
            }
        }
    }
    printf("%d %d",es,os);
}