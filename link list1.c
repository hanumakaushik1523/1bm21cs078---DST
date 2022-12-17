#include<stdio.h>
#include<stdlib.h>

int count = 0;
struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;

struct node* create_node(){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter Number\n");
    scanf("%d",&(temp->data));
    temp->next=NULL;
    return temp;
}

void add_front(){
    if(head==NULL){
        head=create_node();
    }else{
        struct node* temp=create_node();
        temp->next=head;
        head=temp;
    }
}

void add_end(){
    if(head==NULL){
        head=create_node();
    }else{
        struct node* temp=head;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=create_node();
    }
}

void add_between(int pos){
    if(head==NULL){
        printf("There are no elements exist.New list being created\n");
        head=create_node();
    }else if(pos > count){
      printf("Enter Valid Position\n");
    }else{
        struct node* temp=head;
        while(--pos!=1)
        temp=temp->next;
        struct node* temp1=temp->next;
        temp->next=create_node();
        (temp->next)->next=temp1;
    }
}

void display(){
    if(head==NULL){
        printf("No elements have been inserted");
    }else{
    struct node* i=head;
    while (i->next!=NULL)
    {
        printf("%d  ",i->data);
        i=i->next;
    }
    printf("%d  ",i->data);
    printf("\n");
    }
}

void main(){
    int choice;
    printf("1:At the Beginning\n2:End\n3.Enter element at any position\n4.Display the Elements\n5.Exit\n");
    while (1)
    {
        printf("Enter choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            add_front();
            count++;
            break;

        case 2:
            add_end();
            count++;
            break;

        case 3:
            printf("Enter position of element to be inserted\n");
            int p;
            scanf("%d",&p);
            add_between(p);
            count++;
            break;

        case 4:
            display();
            break;

        case 5:
            exit(0);

        default:printf("Invalid choice");
            break;
        }

    }
}
