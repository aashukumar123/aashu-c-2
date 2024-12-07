#include<stdio.h>
void main()
{
    int x,p,s=0,y;
  printf("enter a  number");
  scanf("%d",&x);
  y=x;
  while(y!=0)
  
  {
   p=y%10;
   s=s+p;
   y= y/10;
  }
  
  
    printf("sum of digit %d",s);

  
}