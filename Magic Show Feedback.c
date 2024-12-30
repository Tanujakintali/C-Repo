#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    float s=(a*b+c*d+e*f)/(a+c+e);
    printf("%.2f",s);
}