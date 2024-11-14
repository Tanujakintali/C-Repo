#include<stdio.h>
int main()
{
 int a,b,l,x;
 scanf("%d%d",&a,&b);
 if(a>b){
    x=a;
 }else{
    x=b;
 }while(x){
    if(x%b==0 && x%a==0){
        l=x;
        break;
    }
    x++;
 }
 printf("%d",l);
}g=a