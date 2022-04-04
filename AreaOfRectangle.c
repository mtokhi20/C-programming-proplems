#include<stdio.h>
void main(void)
{
    float width,length,Area;
    printf("Enter Width of Rectangle ");
    scanf("%f",&width);
    printf("Enter length of Rectangle ");
    scanf("%f",&length);
    Area = length*width;
    printf("The Area of Rectangle %7.4f",Area);
}
