#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int c=0,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2!=0){
                c++;
            }
        }
    }
    printf("%d",c*2);
}