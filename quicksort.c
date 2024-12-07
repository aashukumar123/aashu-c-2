#include<stdio.h>
void quicksort(int a[40],int first,int last)
{
    int i,j,tmp,pivot;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(a[i]<=a[pivot]&&i<last)
            i++;
            while(a[j]>a[pivot])
            j--;
            if(i<j)
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
        tmp=a[pivot];
        a[pivot]=a[j];
        a[j]=tmp;  
        quicksort(a,0,j-1);
        quicksort(a,j+1,last); 
          }
}
int main()
{
    int a[40],i,n;
    printf("\nenter the size of array :");
    scanf("%d",&n);
    printf("\nenter the element in array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}