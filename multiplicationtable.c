#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        printf("%d*%d=%d \n",i,n,i*n);
    }
   
}