#include<stdio.h>
void main()
{
    int a;
    int b;
    int c;
    printf("find a number whose is maximum");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d is a greater number",a);
    }
    else if(b>a&&b>c){
        printf("%d is greater number",b);
    }

    
    else if (c>a&&c>b)

    {
        printf("%d is greater number",c);
    }
}
