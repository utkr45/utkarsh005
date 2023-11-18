#include <stdio.h>
int main()
{
    int n, i;
    printf("enter the value upto which you want  even  integers to ne printed: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        continue;
    }
    printf("%d", i);

    return 0;
}
