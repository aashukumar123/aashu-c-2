#include<stdio.h>
void main()
{
    int x;
    int *y;
    int *z;
    x=5;
    y =&x;
    z =&y;
    printf("enter a %d %d %d",x,y,z);
}
