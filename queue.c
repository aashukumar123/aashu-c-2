#define N 5

    int queue[N];
    int rare=-1;
    int front =-1;
void enqueue()

{ 
    int x;
    if(rare==N-1)
    {
        printf("overflow");
    }
    else
    {
        if(front == -1 )
        {
            front =0;
        }
        
            printf("enter a element");
            scanf("%d",&x);
            rare++;
            queue[rare]=x;

            
        }

    }
    void dequeue()
    {
        if(front==-1&&rare==-1)
        {
            printf("\nunderflow");
        }
        else
        {
            printf("\ndequeue element %d",queue[front]);
            front++;
        }
    }
    void display()
    {
        int i;
        if(front==-1&&rare==-1)
        {

            printf("queue is empty");
        }
        else
        {
            printf("element");
            for(i=front;i<=rare;i++)
            {
                printf("\n%d",queue[i]);
            }

        }
    }

void main()
{
    int ch;
    printf("press 1,enqueue");
    printf("\npress 2,dequeue");
    printf("\npress 3,display");
    printf("\npress 4,exit");
while(1)
{
    printf("\nenter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        
            enqueue();
            break;
        
        case 2:
        
            dequeue();
            break;
        
        case 3:
        
            display();
            break;
        
        case 4:
         exit(0);
        
    }
}


}