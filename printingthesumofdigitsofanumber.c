#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    int sum=0,ld;
    while(n!=0){
        ld = n%10;
        sum = sum + ld;
        n = n/10;
    }
    printf("The sum of digits are: \n%d",sum);
    return 0;
}