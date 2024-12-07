#include<stdio.h>
void main()
{
    int i;
  float a[5],s=0,p;
  printf("enter from user to print a arrays");
  for(i=0;i<5;i++)
  {
  
  scanf("%f",&a[i]);
  
  }
  for(i=0;i<5;i++)
  {
    s=s+a[i];
  }
  printf("total marks is %f\n",s);
  p=(s/500)*100;
  printf("marks percentage is %f\n",p);
  if(p<60&&p>=50)
  {
    printf("congratulation");

  }
  else if(p>=70)

  {
    printf(" he  in one subject fail but he got more than 70");

  }
  else if(p<50&&p>=40)
  {
    printf("first class");
  }
  

  
  else
  {
    printf("fail");
  }
  


}