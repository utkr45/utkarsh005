#include <stdio.h>
int main()
{
    int x;
    printf("Enter the value of integer: \n");
    scanf("%d",&x);
    if(x%5 == 0 && x%3 == 0){
        printf("YES it is divisible by 5 and 3");
    }
    else{
        printf("NO it is not divisible by 5 and 3");
    }
    return 0;
}