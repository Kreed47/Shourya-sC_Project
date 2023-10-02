int main(){
    int n;
    int rem=0;
    int rev=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=n;i>0;)
    {
        rem=i%10;
        rev=rev*10+rem;
        i=i/10;

    }
    printf("The reverse order is:%d ",rev);
     if (rev==n)
    printf("It is a Palindrome Number");
    else
    printf("It is NOT a Palindrome Number");
    return 0;

    
}









