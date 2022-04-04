#include<stdio.h>
void main(void){
   int number;
   printf("Enter Number ");
   scanf("%d",&number);
   if (number%2==0)
     printf("The Number (%d) is Even ", number);
   else
     printf("The Number (%d) is ODD ", number);
}
