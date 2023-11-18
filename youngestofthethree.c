#include <stdio.h>
int main()
{
    int age1, age2, age3;
    printf("Enter the age of first person: \n");
    scanf("%d", &age1);
    printf("Enter the age of second person: \n");
    scanf("%d", &age2);
    printf("Enter the age of third person: \n");
    scanf("%d", &age3);
    if (age1 < age2)
    {
        if (age1 < age3)
        {
            printf("The youngest among the three is person 1");
        }
    }
    else if (age2 < age3)
    {
        printf("The youngest among the three is person 2");
    }
    else
    {
        printf("The youngest among the three is person 3");
    }
    return 0;
}