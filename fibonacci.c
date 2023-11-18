#include<stdio.h>
int fibonacci(int number){
    if(number == 0)
    {
    return 0;
    }
    else if( number == 1)
    {
    return 1;
    }
    else
    {
        return fibonacci(number ) + fibonacci(number -1);
    }
}

int main(){
    int num;
    printf("Enter the integer: ");
    scanf("%d",&num);
    printf("The sum of fibonacci  of %d is %d \n", num, fibonacci(num));
    return 0;
}