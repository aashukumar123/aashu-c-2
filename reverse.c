#include<stdio.h>
void main()
{
    int x,y,p,s=0;
    printf("enter number");
    scanf("%d",&x);
    while(x!=0)
    {
        p=x%10;
        s=(s*10)+p;
        x=x/10;
    }
    printf("reverse number is :%d",s);
    
    

}