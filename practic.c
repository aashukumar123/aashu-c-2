#include<stdio.h>
int main()
{
    int i;
    int count=0;
    for(i=50;i<=60;i++)
    {
    printf("%d\n",i);
    int temp=i;
    while(temp>0)
    {
        if(temp%10==5)
        {
            count++;
        }
        temp=temp/10;
    }
    }
    printf(" the 5 number is appear %d",count);
}