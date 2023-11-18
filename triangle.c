#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    printf("Enter the value of c: \n");
    scanf("%d", &c);
    if (a + b > c)
    {
        if (b + c > a)
        {
            if (c + a > b)
            {
                printf("The triangle can be formed by the given sides");
            }
        }
    }
    else
    {
        printf("the triangle can not  be formed by the given three sides");
    }

    return 0;
}