#include<stdio.h>
void main(void){
    // Area of = 0.5 * base * high
    float base,high,Area;
    printf("Enter base of Triangle ");
    scanf("%f",&base);
    printf("Enter high of Triangle ");
    scanf("%f",&high);
    Area = 0.5 *base*high;
    printf("The Area of Triangle %7.4f",Area);
}
