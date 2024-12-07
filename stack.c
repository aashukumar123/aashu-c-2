struct node 
{
    int Cap;
    int Top;
    int *Arr;
};
 struct node *createnode(int size)
{
    struct node *a;
    a=(struct node*)malloc(sizeof(struct node));
    a->Arr=(int*)malloc(size*sizeof(int));
    a->Cap=size;
    a->Top=-1;
    return a;
}
int isFull( struct node *b)
{
 if(b->Cap-1==b->Top)
 
    return 1;
 
 else
 return 0;
}
int isEmpty(struct node *b)
{
    if(b->Top=-1)
    return 1;
    else 
    return 0;
}

push(struct node *a,int data)
{
  if(!isFull(a)) 
  {
    a->Top++;
    a->Arr[a->Top]=data;
    return;
  }
  printf("stack is full");
}
int pop(struct node *a)
{
   if(!isEmpty(a))
   { int data;
    data=a->Arr[a->Top];
    a->Top--;
    return data;
   }
   return -1;
}

void main()
{
    int ch,data,d;
    struct node *stack;
    stack=createnode(8);
    printf("press 1,push");
    printf("\npress 2,pop");
    printf("\npress 3,exit");
  while(1)
  {
    printf("\n enter a your choice");
    scanf("%d",&ch);
    switch(ch)

    {
        case 1:
        {
            printf("enter a data");
            scanf("%d",&data);
            push(stack,data);
            break;
        }
        case 2:
        {
          d=pop(stack);
          if(d==-1)
           {
            printf("stack is empty");
                
            }
            else
            {
                printf("element is popped %d",d);

            }
            break;
        }
        case 3:
        {

            exit(0);
        }
        default :
        {
            printf("no operation wll be performed");

        }
    }
  }



}