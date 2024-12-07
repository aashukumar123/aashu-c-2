#include<stdio.h>
void main()
{
    int i,j,n,space;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(space=1;space<i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");

            
}
}