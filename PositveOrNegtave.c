#include<stdio.h>
void main(void){
   int number;
   printf("Enter Number ");
   scanf("%d",&number);
   if(number>0)
      printf("The Number (%d) is Positive ", number);
   else if(number<0)
      printf("The Number (%d) is Negative ", number);
   else
      printf("The Number is Equal Zerooooo");
}
