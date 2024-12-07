#include<stdio.h>
#include<string.h>
void remove_p(char*str)
{
    int level=0;
    int index=0;
    for(int i=0;str[i] !='\0';i++)
    {
        if(str[i]=='(')
        {
            if(level>0)
            {
                str[index++]=str[i];
            }
                level++;
        }else if(str[i]==')')
        {
            level--;
            if(level>0)
            {
           str[index++]=str[i];
            }
        }
            else
            {
                str[index++]=str[i];

            }       
    }
    str[index]='\0';
}
int main()
{
    char str[]="(()()())(())";
    
    remove_p(str);
    printf("result:%s\n",str);
    return 0;

}