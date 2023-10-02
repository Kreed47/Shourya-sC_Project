#include<stdio.h>
int main()
{
    printf("Enter the the number : ");
    float a,b,c,d;
    scanf("%f", &a);
    b=a*a;
    c=a*a*a;
    d=a*a*a*a;
    printf("The square is : %f\n", b);
    printf("The cube is : %f\n",c);
    printf("The 4th power is : %f\n",d);
    return 0;
}