#include <stdio.h>
int main()
{
    int x;
    printf("Enter the integer: \n");
    scanf("%d", &x);
    if (x > 99 && x < 1000)
    {
        printf("YES it is a three digit number");
    }
    else
    {
        printf(" NO it is not a three digit nuumber");
    }
    return 0;
}