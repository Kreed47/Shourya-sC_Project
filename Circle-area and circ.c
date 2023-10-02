#include<stdio.h>
int main(){
    float r,area,circ;
    printf("Enter the radius of the circle : ");
    scanf("%f", &r);
    area=3.14*r*r;
    circ=2*3.14*r;
    printf("The area and circumference of the circle are %f %f", area, circ);
return 0;

}