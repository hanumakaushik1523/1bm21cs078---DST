#include <stdio.h>
#define stack 5
int st[5],item,top=-1;
void push ()
{
    if (top==stack)
    printf("stack overflow\n");
    else
    {
        top++;
        st[top]=item;
    }
}
int pop()
{
    int del;
    if (top==-1)
    printf("stack underflow\n");
    else
    {
        del=st[top];
        top--;
        return del;
    }
}
void display()
{
    int i;
    if (top==-1)
    printf("stack is empty\n");
    for (i=0;i<=top;i++)
    printf("%d\t",st[i]);
}
void main()
{
    int a,b;
    while(1)
    {
        printf("to push enter 1\nto pop enter 2\nto display enter 3\n to exit enter 4\n");
        scanf("%d",&a);
        switch (a)
        {
            case 1: scanf("%d",&item);
                    push();
            break;
            case 2: b = pop();
                    printf("%d",b);
            break ;
            case 3: display();
            break; 
            case 4: goto xy;
            break ;
            default : printf("error\n");
            break;
                    
    
        }
    }
    xy:
    printf ("completed");
}