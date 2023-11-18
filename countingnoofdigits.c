#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
     int count=0;
     while(x!=0){
        x=x/10;
        count++;
            }
        printf("The number of digits are %d\n",count);
        return 0;
}