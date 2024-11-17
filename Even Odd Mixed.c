#include<stdio.h>
int main()
{
    int n,i,e=0,o=0;
    scanf("%d",&n);
    while(n){
        i=n%10;
        if(i%2==0){
            e++;
        }else if(i%2!=0){
            o++;
        }n=n/10;
    }if(e==0){
        printf("Odd");
    }else if(o==0){
        printf("Even");
    }else{
        printf("Mixed");
    }
}