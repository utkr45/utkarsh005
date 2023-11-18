#include <stdio.h>
int main()
{
    int x;
    printf("enter the value of x:\n");
    scanf("%d",&x);
    if(x%3==0 || x%5==0 ){
        if(x % 15 != 0){
        printf("no. is divisible by 5 or 3 but not 15");
        }
    }
    else{
        printf("no. is not divisible by 3 or 5 ");
    }
       
    return 0;
}