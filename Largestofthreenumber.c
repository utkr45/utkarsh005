#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a: \n");
    scanf("%d,&a");
     printf("Enter the value of b: \n");
    scanf("%d,&b");
     printf("Enter the value of c: \n");
    scanf("%d,&c");
   if( a>b && a>c){
    printf("The largest number is: %d\n",a);
   }
  else if(b>a && b>c){
    printf("The largest number is: %d\n",b);
  }
  else{
printf("The largest number is: %d\n",c);

  }
   return 0;
}