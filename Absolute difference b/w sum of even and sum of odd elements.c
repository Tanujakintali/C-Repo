#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int e=0,o=0;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            e+=a[i];
        }else{
            o+=a[i];
        }
    }
    int d=abs(e-o);
    printf("%d",d);
}