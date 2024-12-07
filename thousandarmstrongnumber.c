#include<stdio.h>
void main()
{
    int x,p,s,y;
  
  for(x=1;x<1000;x++)
  {
  s=0;
  y=x;
  while(y!=0)
  {
   p=y%10;
   s=s+(p*p*p);
   y= y/10;
  }
  
  if(x==s)
  
  
    printf(" %d",s);
  
  }
  


  
}