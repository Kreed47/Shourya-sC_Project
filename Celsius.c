#include<stdio.h>
int main(){
    float C,F;
    printf("Enter the temperatur in celsius : ");
    scanf("%f", &C);
    F=(((9*C)/5)+32);
    printf("The temperature in fahrenheit is : %f",F);
    return 0;

}