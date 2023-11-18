#include <stdio.h>
int main()
{
    int x;
    printf("Enter the value of x: \n");
    scanf("%d",&x);
    float y = x/2.0;
    printf("The half of the entered number is: %f\n",y);
    return 0;
}