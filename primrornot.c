#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of integer: \n");
    scanf("%d",&n);
    int a=0;
    for(i=2;i<=n-1;i++)
    if (x % i == 0) // i is a factor of x
    {
        a = 1; // i factor ho gya toh a 1 ho jayega
        break;
    }
    if(a==0){
        printf("prime");
    }
    else{
        printf("not prime");
    }
    return 0;
}