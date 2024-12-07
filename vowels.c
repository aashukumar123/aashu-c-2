#include<stdio.h>
void main()
{
    char ch;
    
    printf("which is vowels letter:\n");
    scanf("%c",&ch);
    if(ch =='a'|| ch=='A'||ch =='E'||ch=='I'||ch=='O'||ch=='U'||ch== 'e'||ch =='i'||ch =='o'||ch =='u')
    {
        printf("the character %c is vowel letter.",ch);

    }
    else 
    {

        printf("  the character %c is a consonet letter.",ch);
        
    }
    
    
        
    

    
    
    
}