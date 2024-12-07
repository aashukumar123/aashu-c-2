#include<stdio.h>
void main()
{
    char a[20],t;
    int i,l;
    puts("enter a steering");
    gets(a);
     l=strlen(a);
    for(i=0;i<l/2;i++)
    {
        
            t=a[i];
          a[i]=a[l-1-i];
          a[l-1-i] = t;
    
    
}
printf("the number %s",a);
}





