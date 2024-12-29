#include<stdio.h>
int sum(int a){
    int i,s=0;
    while(a!=0){
        i=a%10;
        s+=i;
        a=a/10;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n%sum(n)==0){
        printf("True");
    }else{
        printf("False");
    }
}