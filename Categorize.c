#include<stdio.h>
int main()
{
    float n;
    scanf("%f",&n);
    if(n<150){
        printf("Person is Dwarf.");
    }else if(n>=150 && n<=165){
        printf("Person is average heighted.");
    }else if(n>165 && n<195){
        printf("Person is taller.");
    }else{
        printf("Abnormal height.");
    }
}