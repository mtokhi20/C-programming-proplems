#include<stdio.h>
void main(void){
    float length_of_side,Area;
    printf("Please Enter Length ");
    scanf("%f",&length_of_side);//take length from user
    Area=length_of_side*length_of_side;//area of square length of side multiply with it self
    printf("The Area of Square %6.3f",Area);//print Area

}
