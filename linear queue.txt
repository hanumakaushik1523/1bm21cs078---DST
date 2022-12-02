#include<stdio.h>
#include<stdlib.h>
#define qsize 3
void insert_rear(int q[],int item,int*r)
{
    if(*r==qsize-1)
    printf("queue overflow\n");
    else 
    {
        (*r)++;
        q[*r]=item;
    }
}
int delete_front(int q[],int *f,int *r)
{
    if(*f>*r)
    printf("queue underflow");
    else
    return(q[(*f)++]);
}
void display(int q[],int *f,int *r)
{
    int i;
    if(*f>*r)
    printf("queue is empty\n");
    else
    {
        for(i=*f;i<=*r;i++)
        printf("%d",q[i]);
    }
}
void main()
{
    int r=-1;
    int f=0;
    int item,q[qsize];
    int n,i;
    while(1)
    {
        printf("Choose from the following\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:printf("Enter the item to be inserted\n");
                    scanf("%d",&item);
                    insert_rear(q,item,&r);
                    break;
            case 2:i=delete_front(q,&f,&r);
                    printf("item being deleted is %d\n",i);
                    break;
            case 3:display(q,&f,&r);
                    break;
            case 4:exit(0);
            default:printf("Enter a Valid Option");
                    break;
        }
    }
}