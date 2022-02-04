
#include<stdio.h>
#include<stdlib.h>
void insertAtBegining(int);
void insertAtEnd(int);
void insertAtPos(int,int,int);
struct Node
    {
    int data;
    struct Node *next;
    }*head=NULL;
void main()
    {
    int key,value,choice,a,b;
    menu:
    printf("\nMENUS:");
    printf("\n1.Insert at beginning \n2.Insert at end \n3.Insert in between two nodes \n4.Traversal \n5.Exit");
    printf("\nEnter your choice:");
    scanf("%d",&key);
    switch(key)
     {
      case 1:
          printf("\nINSERTION FROM BEGINNING\n");
          do{
            printf("\nEnter the item which is to be inserted:");
            scanf("%d",&value);
            insertAtBegining(value);
            printf("\nPress 0 to insert more..");
            scanf("%d",&choice);
            }
          while(choice==0);
      break;
      case 2:
          printf("\nINSERTION FROM END\n");
          do{
            printf("\nEnter the item which is to be inserted:");
            scanf("%d",&value);
            insertAtEnd(value);
            printf("\nPress 0 to insert more..");
            scanf("%d",&choice);
            }
          while(choice==0);
      break;
      case 3:
          printf("\nINSERTION INBETWEEN TWO NODES\n");
          do{
            printf("\nEnter the elements in between item to be inserted:");
            scanf("%d%d",&a,&b);
            printf("\nEnter the item which is to be inserted:");
            scanf("%d",&value);
            insertAtPos(a,b,value);
            printf("\nPress 0 to insert more..");
            scanf("%d",&choice);
            }
          while(choice==0);
      break;
      case 4:
          printf("\nTRAVERSAL\n");
          if(head==NULL)
            {
            printf("\n\nList is Empty");
            }
          else
            {
            struct Node *temp=head;
            printf("\n\nList elements are:");
            while(temp->next!=NULL)
             {
             printf("%d --->",temp->data);
             temp=temp->next;
             }
            printf("%d--->NULL",temp->data);
            }
      break;
      case 5:
          printf("\nExiting...");
          printf("\nPress Enter to continue");
          exit(0);
     }
    goto menu;
    }
void insertAtBegining(int value)
    {
    struct Node *newNode=malloc(sizeof(struct Node));
    newNode->data=value;
    if(head==NULL)
     {
     head=newNode;
     newNode->next=NULL;
     }
    else
     {
     newNode->next=head;
     head=newNode;
     }
    printf("\nOne Node Inserted at beginning!!");
    }
void insertAtEnd(int value)
    {
    struct Node *newNode=malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL)
     {
     head=newNode;
     }
    else
     {
      struct Node *temp=head;
      while(temp->next!=NULL)
      {
       temp=temp->next;
      }
     temp->next=newNode;
     }
    printf("\nOne Node Inserted at end!!");
    }
void insertAtPos(int a,int b,int value)
    {
    struct Node *newNode=malloc(sizeof(struct Node));
    newNode->data=value;
    if(head==NULL)
     {
     newNode->next=NULL;
     head=newNode;
     }
    else
     {
      struct Node *temp=head;
      while(temp->data!=a && temp->data!=b)
       {
       temp=temp->next;
       }
     newNode->next=temp->next;
     temp->next=newNode;
     }
    printf("\nOne Node Inserted between elements %d and %d !!",a,b);
    }
