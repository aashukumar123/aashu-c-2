#include<stdio.h>
void main()
{
    int x,i,count=0;
    printf("enter a number");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
        count++;
        }
    
       
    }
    if(count==2)
    {
        printf("this is a prime number");
    }
    else
    {
        printf("not a prime number");



}