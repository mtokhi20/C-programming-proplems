#include<stdio.h>
#define PI 3.14
void main(void){
    //area of Circule is 3.14 *(r*r)
    float Reduis,Area;
    printf("Enter Reduis of Circule ");
    scanf("%f",&Reduis);
    Area = PI *Reduis*Reduis;
    printf("The Area of Circule %7.4f",Area);
}
