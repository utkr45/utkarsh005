#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a: \n");
    printf("Keep in mind that a must be greater than b\n");
    scanf("%d",&a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    float c = a % b;
    printf("The remainder when 'a' is divide by 'b' is: %f\n", c);

    return 0;
}