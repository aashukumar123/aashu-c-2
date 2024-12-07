#include<stdio.h>
void main()
{
int a[10],i,b;
printf("enter a number in block");
for(i=0;i<10;i++)
{

    scanf("%d",&a[i]);
}
    printf("enter a number for searching for user" );
    scanf("%d",&b);

    for(i=0;i<10;i++)
    {
    if(a[i]==b)
    {
        printf("then it found  %d the number ",i+1);
        break;

    }
    }
    if(i==10)
    {
        printf("then number is not found");
    }



}