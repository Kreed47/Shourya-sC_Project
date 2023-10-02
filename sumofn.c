#include <stdio.h>
int main()
{
    int i = 1, s = 0;
    int n; 
    printf("Enter the number : ");
    scanf("%d",&n);
   
    
    while (i <= n) {
       
       
        s += i;
        i++;
    }
   
    printf("Sum = %d", s);
    return 0;
}