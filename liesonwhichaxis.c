#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x and y coordinate  you want to check in which axis it is lying\n");
    printf("Enter the value of x:\n");
    scanf("%d", &x);
    printf("Enter the value of y:\n");
    scanf("%d", &y);
    if(x == 0 && y!= 0){
        printf("The coordinates lies on y axis");
    }
    else if(x != 0 && y == 0){
        printf("The coordinates lie on x axis");
    }
    else if( x==0 && y==0){
        printf("The point lies on origin");
    }
    else{
        printf("The point lies on any arbitrary point but not on any of the axis");
    }
    return 0;
}