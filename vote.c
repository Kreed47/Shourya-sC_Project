#include<stdio.h>
int main(){

printf("Enter your age : ");
int a;
scanf("%d",&a);
if (a>=18)
printf("You are eligible to vote");
else 
printf("You are NOT eligible to vote");
return 0;
}