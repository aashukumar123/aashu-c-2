#include<stdio.h>
void main()
{
    char a[5],t;
    int i,l;
    printf("enter a steering");
    scanf("%s",&a);
     l=strlen(a);
    for(i=0;i<l/2;i++)
    {
         if( a[i]!=a[l-1-i])
    
    {
    printf("the  not palinojsdhu");
    break;
    }
    }
    if(i==l/2)
    {
        printf("this palajkjcsk");
    }
}





