#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d", &b);
    printf("Enter the value of c:\n");
    scanf("%d", &c);
    if(a>b && a>c){
        printf("The greatest number among three is %d",a);
        
    }
    
    
    return 0;
}