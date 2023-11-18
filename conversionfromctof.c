#include <stdio.h>
int main()
{
   float c;
   float f;
    printf("Enter the value of temp in centigrade: \n");
    scanf("%d", &c);
    f = c * 9/5 + 32;
    printf("%.2f Celsius = %.2f Fahrenheit",c,f);
    return 0;
}