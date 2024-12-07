#include<stdio.h>
void quicksort(int a[100],int first,int last)
{
    int i,j,pivot;
    if(first<last)
    {  pivot=first;
        int temp;
        i=first;
        j=last;
        
        while(i<j)
        {
            while(a[i]<=a[pivot])
            i++;
            while(a[j]>a[pivot])
            j--;
            if(i<j)
            {
                temp=a[first];
                a[first]=a[last];
                a[last]=temp;


            }
        }
            temp=a[pivot];
            a[pivot]=a[j];
            a[j]=temp;
            quicksort(a,0,j-1);
            quicksort(a,j+1,last);

        

        
    }

}
int main()
{
    int i,n,pivot;
    int a[100];
    int temp;
    printf("enter number a element");
    scanf("%d",&n);
    printf("enter a value from the user");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); 
    }
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;

    



}