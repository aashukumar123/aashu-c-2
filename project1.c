#include<stdio.h>//inseration sort//
 void main()
{
  int temp;
  int a[6],j,i;
  printf("enter a value ");
  
  for(i=0;i<=6;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<=6;i++)
  {
  
  temp=a[i];
  for(j=i-1;j>0&&temp<a[j];j--)
  {
  a[j+1]=a[j];
  }
  a[j+1]=temp;
}
printf("after sorting ");
for(i=0;i<=6;i++)
{
  printf("%d",a[i]);

}


}









  

