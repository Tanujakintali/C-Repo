#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int t,c=0;
    scanf("%d",&t);
    for(i=0;i<n;i++){
        if(a[i]==t){
            c++;
        }
    }
    int max=0,min=n;
    if(c==0){
        printf("-1 -1");
    }else{
        for(i=0;i<n;i++){
            if(a[i]==t){
                if(max<i){
                    max=i;
                }
                if(min>i){
                    min=i;
                }
            }
        }
        printf("%d %d",min,max);
    }
}