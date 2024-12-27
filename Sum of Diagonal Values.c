#include<stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int a[x][y],i,j;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int s=0;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            if(i==j){
                s+=a[i][j];
            }
        }
    }
    int c;
    if(x%2==1 && y%2==1){
     c=a[x/2][y/2];
    }
    j=0;
    for(i=x-1;i>=0;i--){
        s+=a[i][j];
        j++;
    }
    printf("%d",s-c);
}