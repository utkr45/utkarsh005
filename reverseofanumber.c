#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    int ld, r = 0;
    while (n > 0)
    {
        ld = n % 10;
        r = r + ld;
        r = r * 10;
        n = n / 10;
    }
    printf("The reverrse is: \n", r);
    return 0;
}