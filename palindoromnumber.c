#include<stdio.h>
void main()
{
    int x,y,p,s=0;
    printf("enter number");
    scanf("%d",&x);
    y=x;
    while(x!=0)
    
    {
        p=x%10;
        s=(s*10)+p;
        x=x/10;
    }
    if(s==y)
    {
    printf("%d",s);
    }
    else
    {
        printf("this is not a palindronenumber");


    }
    
    

}