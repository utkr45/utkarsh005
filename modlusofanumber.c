#include <stdio.h>
int main()
{
    int x;
    printf("Enter the value of integer:\n");
    scanf("%d",&x);
    if(x > 0){
        printf("The mod of the integer is: %d",x);
    }
    else{
        printf(" The mod of the integer is: %d",-x);
    }
    return 0;
}