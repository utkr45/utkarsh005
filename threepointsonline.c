#include <stdio.h>
int main()
{
    int x1, x2, x3, y1, y2, y3;
    printf("enter the value of x1:\n");
    scanf("%d", &x1);
    printf("enter the value of y1:\n");
    scanf("%d", &y1);
    printf("enter the value of x2:\n");
    scanf("%d", &x2);
    printf("enter the value of y2:\n");
    scanf("%d",&y2);
    printf("enter the value of x3:\n");
    scanf("%d", &x3);
    printf("enter the value of y3:\n");
    scanf("%d", &y3);
    int a = y2 - y1;
    int b = x2 - x1;
    int c = y3 - y2;
    int d = x3 - x2;
    if (a / b == c / d)
    {
        printf("The given points lie on the same line");
    }
    else
    {
        printf("The given points do not lie on the same  line");
    }

    return 0;
}