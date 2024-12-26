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
    int e=0,o=0;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            if(a[i][j]%2==0){
                e+=a[i][j];
            }else{
                o+=a[i][j];
            }
        }
    }
    printf("%d %d",e,o);
}