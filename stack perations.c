#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next
};*top=NULL;
void push(int);
void pop();
void display();
void main()
{
    int choice,value;
    printf("stack using linked list");
    while(1)
    {
        printf("\n1.push\n2.pop\n3.display\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter the value");
                   scanf("%d",&value);
                   push(value);
            break;

            case 2:pop();
            break;

            case 3:display();
            break;



            default:
                {
                    printf("please enter valid choice");

                }

        }
    }
    }
    void push(value)
        {
            struct node*newNode;
            newNode=malloc(sizeof(struct node));
            newNode->data=value;
            newNode->next=NULL;
            if(top==NULL)
            {
                top=newNode;
            }
            else
            {
                newNode->next=top;
                top=newNode;
            }


        }
    void pop()
    {
            if(top==NULL)
            {
                printf("stack is empty\n");
            }
            else
            {
                struct node*temp;
                temp=top;
                top=temp->next;
                free(temp);
                printf("item popped");
            }

    }

     void display()
     {
         struct node*temp;
         temp=top;
         if(temp==NULL)
         {
            printf("stack is empty\n");
         }
         else
         {
            printf("printing stack elements\n");
            while(temp!=NULL)
            {
                printf("%d\n",temp->data);
                temp=temp->next;
            }
         }
     }

