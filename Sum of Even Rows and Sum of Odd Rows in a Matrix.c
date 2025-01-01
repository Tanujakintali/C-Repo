#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int es=0,os=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i%2==0){
                es+=a[i][j];
            }else{
                os+=a[i][j];
            }
        }
    }
    printf("%d %d",es,os);
}