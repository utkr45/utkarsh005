#include <stdio.h>
#include<math.h>
int main()
{
    int ft,a,n;
    float r;
    printf("Enter the first number: \n");
    scanf("%d",&ft);
    printf("Enter the common ratio: \n");
    scanf("%f",&r);
    a = ft*r;
    for(float i =ft;i<=a;i=i*r){
        printf("%f",i);
    }
    return 0;
}