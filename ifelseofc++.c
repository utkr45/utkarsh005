#include<stdio.h>
int main(){
    int  a, b;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("A is greater than B");
    }
    else{
        printf("B is greater than A ");
    }
    return 0;
}