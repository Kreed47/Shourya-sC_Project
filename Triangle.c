#include<stdio.h>
int main(){
    float b,area,h;
    printf("Enter the base and height of the triangle : ");
    scanf("%f %f", &b, &h);
    area=0.5*b*h;
    printf("The area of the triangle is %f", area);
return 0;

}