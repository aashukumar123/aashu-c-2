#include<stdio.h>
int countnumber(int upper,int lower,int digit)
{
    int count=0;
    printf("enter number 50 to 60\n");
    for(int i=upper;i<=lower;i++)
    {
        printf("%d\n",i);
      int  temp=i;
      while(temp>0)
      {
        if(temp%10==digit)
        count=count+1;
        temp=temp/10;
      }
    }
    printf("how many times does 5 repeat :%d",count);
    return 0;
}
int main()
{
    
    int upper=50;
    int lower =60;
    int digit=5;
    countnumber(upper,lower,digit);   
}