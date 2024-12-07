#include<stdio.h>
void main()

{
    int a[10],i,min,k,S,temp;
    printf("enter a value ");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
 


for(k=0;k<5;k++)
  
{   min=a[k];
    for(i=1+k;i<6;i++)
    {
        if(min>a[i])
        {
             min=a[i];
             S=i;
        }

    }
    temp=a[k];
    a[k]=min;
    a[S]=temp;

}
printf("after sorting");
for(i=0;i<5;i++)
{
    printf("%d",a[i]);
}

}