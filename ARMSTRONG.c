#include<stdio.h>
int main(){
    int n, rem=0 , rev=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=n;i>0;)
    {
        rem=i%10;
        rev=rev*10+rem;
        i=i/10;
    }
    printf("The reverse order is %d", rev);
    if (rev==n){
        printf("\n %d is an ARMSTRONG number ",n);
    }
    else{
        printf("\n %d is NOT AN ARMSTRONG number",n);
    }
    return 0;
}
