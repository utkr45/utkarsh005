#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: \n");
    scanf("%d", &n);
    int sum = 0, ld;
    while (n != 0)
    {
        ld = n % 10;
        if (ld % 2 == 0)
        {
            sum = sum + ld;
            
        }
        n = n / 10;
    }

    printf("The sum of even numbers is %d", sum);
    return 0;
}