#include<stdio.h>
int main(){
    float P,R,T,I;
    printf("Enter the principal amount :");
    scanf("%f", &P);
    printf("Enter the rate of interst :");
    scanf("%f", &R);
    printf("Enter the time:");
    scanf("%f",&T);
    I=(P*R*T)/100;
    printf("The interest is %f",I);
    return 0;
}