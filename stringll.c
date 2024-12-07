#include<stdio.h>
int main() 
{

    char *s,i,a[9]={0};
    s = (char*)malloc(1000* sizeof(char));
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='1'&&s[i]<='9')
        {
            a[s[i]-48]++;
        }
    }
    for(i=0;i<=9;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}