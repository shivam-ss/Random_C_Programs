#include <stdio.h>
int main() 
{
    int n,m,rev,rem;
    rev=0;
    
    printf(" \n Enter a number ");
    scanf("%d",&n);    
    m=n;
    
    while(n>0){
        rem=n%10;
        rev=((rev*10)+rem);
        n=n/10;
    }
    
    if(n1==rev)
	{
        printf("Given number is a Palindrome"); 
    }
    else
	{
        printf("Given number is not a Palindrome"); 
    }    
    return 0; 
} 

