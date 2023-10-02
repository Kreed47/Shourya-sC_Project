#include<stdio.h>
int main (){
    printf("Enter the two numbers :");
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>=b)
    printf("%d is the greater number", a);
    else 
    printf("%d is the greater number", b);
    return 0;
}