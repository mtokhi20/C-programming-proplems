#include<stdio.h>
void main(void){
 float value;
 int amount,coin_50,coin_25,coin_10,coin_5,coin_1;
 printf("Enter value ");
 scanf("%f",&value);
 amount = value*100;
  printf("amount = %d ", amount);
 coin_50=amount/50;
 coin_25=(amount-(50*coin_50))/25;
 coin_10=(amount-(50*coin_50)-25*coin_25)/10;
 coin_5= (amount-(50*coin_50)-(25*coin_25)-10*coin_10)/5;
 coin_1= (amount-(50*coin_50)-(25*coin_25)-(10*coin_10)-5*coin_5)/1;
 printf("\n coin 50 = %d, coin 25 = %d , coin 10 = %d , coin 5 = %d , coin 1 = %d ", coin_50,coin_25,coin_10,coin_5,coin_1 );

}
