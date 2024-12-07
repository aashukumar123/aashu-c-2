 // int fact(int n)
 // {
   // if(n==1)
    //{
    //return 1;
    //}
    //else
    //{
   //     return n*fact(n-1);
    //}
  //}


//#include<stdio.h>
//void main()
//{
  //  int r;
   // r=fact(5);
   // printf("factorial value %d",r);
//}
#include<stdio.h>
void main()
{
int a= -1,b=1,c,i,n;
printf("fabonacci number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  c=a+b;
  a=b;
  b=c;
printf("%d\n",c);
}
}
