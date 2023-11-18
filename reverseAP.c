#include <stdio.h>
int main()
{
    int t,d,ft,n;
    printf("Enter the number upto which you want the numbers to be printed:\n");
    scanf("%d",&t);
    printf("Enter the common diference:\n");
    scanf("%d",&d);
    printf("Enter the first term:\n");
    scanf("%d",&ft);
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
     t = ft + (n-1)*d;
    for(int i=ft;i>=t;i=i+d){
        printf("%d\n",i);
    }
    return 0;
}