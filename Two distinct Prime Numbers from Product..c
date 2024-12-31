#include<stdio.h>
int count(int a){
    int i,c=0;
    for(i=1;i<=a;i++){
        if(a%i==0){
            c++;
        }
    }
    return c;
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int c=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j*i==n){
                if(count(j)==2 && count(i)==2){
                    c=1;
                    printf("%d %d",j,i);
                    break;
                }
            }
        }
    }
    if(c==0){
        printf("-1");
    }
}