#include<stdio.h>
int main(){
    float a,b,c,d,e,f;
    printf("Enter the marks of 5 subjects :");
    scanf("%f %f %f %f %f",&a, &b, &c, &d, &e);
    f=(a+b+c+d+e)/5;
    printf("The percentage of the student is : %f",f);
    return 0;
}