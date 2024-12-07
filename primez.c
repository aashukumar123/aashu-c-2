#include<stdio.h>
void main()
{
    int x,n,count=0,i;
    printf("enter a range for prime number");
    scanf("%d",&x);

    for(n=1;n<=x;n++)
    {
        
    
    for( i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("prime number ");
        }
        else{
            printf(" not prime number");
        }
    }
}