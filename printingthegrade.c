#include <stdio.h>
int main()
{
    int x;
    printf("Enter the marks obtained:\n");
    scanf("%d",&x);
    if(x>=91 && x<=100){
        printf("Excellent");
    }
    else if (x >= 81 && x <= 90)
    {
        printf("very good");
    }
    else if (x >= 71 && x <= 80)
    {
        printf("Good");
    }
    else if (x >= 61 && x <= 70)
    {
        printf("can do better");
    }
    else if (x >= 51 && x <= 60)
    {
        printf("average");
    }
    else if (x >= 40 && x <= 50)
    {
        printf("below average");
    }
    else (x < 40)
    {
        printf("fail");
    }

    return 0;
}