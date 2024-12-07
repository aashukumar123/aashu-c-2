#include<stdio.h>
void main()
{
    int x,y,s=1,i;
    printf("enter a coefficient");
    scanf("%d",&x);
    printf("enter a power ");
    scanf("%d",&y);
    for(i=1;i<=y;i++)

    {
        s=s*x;;

    }
    printf("result of cofficient is %d",s);


}