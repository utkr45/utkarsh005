#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b:\n");
    scanf("%d", &b);
    printf("Enter the value of c:\n");
    scanf("%d", &c);
    if (a > b)
    {
        if (a>c){
        printf("The greatest number among three is %d", a);
    }
    }
    else if(b>c){
        printf("The greatest number among three is %d", b);
    }
    else{
        printf("The greatest number among three is %d", c);
    }

    

    return 0;
}