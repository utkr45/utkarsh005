#include <stdio.h>
int main()
{
    int n,d,ft;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    printf("Enter the value of common difference:\n ");
    scanf("%d",&d);
    printf("Enter the first term:\n");
    scanf("%d",&ft);

    int a = ft+(n-1)*d;

    for(int i=ft;i<=a;i=i+d){
        printf("%d\n",i);
    }
    return 0;
}