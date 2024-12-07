#include<stdio.h>


 int decimal(char c)
 {

        int count;
        switch(c)
        {
            case'I':
            count=1;
            break;
            case 'IV':
            count =4;
            break;
            case 'v':
            count =5;
            break;
            case 'IX':
            count=9;
            break;
            case 'X':
            count=10;
            break;
            case 'XL':
            count=40;
            break;
            case 'L':
            count =50;
            break;
            case 'XC':
            count =90;
            break;
            case 'C':
            count =100;
            break;
            case 'CD':
            count=400;
            break;
            case 'D':
            count =500;
            case 'CM':
            count =900;
            break;
            case 'M':
            count=1000;
            break;
            case '\0':  
            count=0;
            break;
            default:
            count =-1;
            break;
        }
        return count;
}

int main()
{
    
    char roman[1000];
    int num=0;
    int i=0;
    printf("enter a roman numberal");
    scanf("%s",roman);
    while(roman[i])

    {
        if(decimal(roman[i]) < 0)
        {
            printf("invalid output");
        }
        if(strlen(roman) -i>2)
        {
            if(decimal(roman[i]) < decimal(roman[i+2]))
            {
                printf("invalied out put");
            }
        }
        if(decimal(roman[i]) >= decimal(roman[i+1]))

        {
            num=num+decimal(roman[i]);
        }
        else
        {
            num=num+decimal(roman[i+1]) - decimal(roman[i]);

        }
        i++;

    }
    printf("%d is the desimal number",num);
    return 0;

}
