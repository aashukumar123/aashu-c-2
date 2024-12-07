#include<stdio.h>
int main()
{
    char s[100];
    int i;
    printf("enter a sentense");
    scanf(" %[^\n]s",s);
    printf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c",s);

        }
    }
}