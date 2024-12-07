#include<stdio.h>
int main()

{
    int i,j,temp,min;
    
   int a[6]= {3,2,4,5,6,7,1};
    int n=6;
    for(j=0;j<(n-1);j++)
    {
         min= j;
        for(i=(1+j);i<6;i++)
        {
            if(a[min]>a[i])
            
              min= i;
        }
        
        
        
        
           temp=a[j];
           a[j]=min;
           a[min]=temp;
        
        
    }
    for(j=0;j<n;j++)
    {
    
    printf("%d\t",a[j]);
    }
    return 0;

    

}