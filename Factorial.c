#include<stdio.h>
int main (){
   float a, F=1.0;
    printf("Enter the number : ");
    scanf("%f", &a);
    while (a>=1){
    F=F*a;
    a=a-1;
    }
printf("The factorial is %f", F);
return 0;





}