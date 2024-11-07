#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Enter the base of a triangle :");
    scanf("%f",&base);
    printf("Enter the height of a triangle : ");
    scanf("%f",&height);
    area=0.5*height*base;
    printf("Area of a triangle is %f",area);
    return 0;
}
