#include <stdio.h>
int main()
{
    float x;
    printf("Enter the value of x: \n");
    scanf("%f",&x);
    int y = x ;// now i have the greatest integer of x as y;
    float a = x - y;
    printf("The fractional part of x is: %f\n", a);

    return 0;
}