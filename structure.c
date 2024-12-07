struct student
{
    int roll;
    char name[10];
    int marks;
    float per;
};


void main()
{
    
    struct student s1;
    printf(" enter roll ,name,marks,per");
    scanf("%d %s %d %2f",&s1.roll,s1.name,&s1.marks,&s1.per);
    printf("%d %s %d %2f",s1.roll,s1.name,s1.marks,s1.per);

}



