#include <stdio.h>
int main()
{
    int cp,sp;
    int profit = sp - cp;
    int loss = cp - sp;
    printf("Enter the cost price of product:\n");
    scanf("%d",&cp);
    printf("Enter the selling price of product:\n");
    scanf("%d", &sp);
    if(sp > cp){
        printf("The seller has made profit\n");
        printf("The profit is:%d\n",profit);
    }
    else{
        printf("The seller has made loss\n");
        printf("THE loss incurred is: %d\n", loss);
    }
    
    return 0;
}