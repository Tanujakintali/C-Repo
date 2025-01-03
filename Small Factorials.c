#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int i,p=1;
        for(i=1;i<=n;i++){
            p*=i;
        }
        printf("%d\n",p);
    }
}