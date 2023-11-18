#include <stdio.h>
#include<math.h>
int main()
{
    int n,r,ft;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    printf("Enter the common ratio: \n");
    scanf("%d",&r);
    printf("Enter the first term:\n");
    scanf("%d",&ft);
    int t = ft*(pow(r,n-1));
    for(int i = ft;i <= t;i = i*r){
        printf("%d\n",i);
    }
    return 0;
}