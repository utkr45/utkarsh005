#include<stdio.h>
int printstar(int n);
    printstar(8);
    printf("%d", n);
    return n;

int main(){
    int i,j;
    printf("Enter the value of i: \n");
    scanf("%d",&i);
    printf("Enter the value of j: \n");
    scanf("%d",&j);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}