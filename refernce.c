add(int *x)
{
printf("enter a number %d\n",*x); 
*x=7;
printf("enter a number %d\n",*x);
}
#include<stdio.h>
void main()
{
    int z=5;
    
    add(&z);
    printf("enter a number%d\n",z);
}