//implementation of doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct node
    {
       int data;
       struct node *prev, *next;
    };

struct node *head = NULL, *newNode, *tail, *temp;

void create()
{
    int choice = 1;

    while(choice)
    {
        
    newNode = (struct node*)(malloc(sizeof(struct node)));
    
    printf("Enter the number: ");
    scanf("%d", &newNode->data);
    newNode->prev = NULL;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = tail = newNode;
    }
    else
    {

        newNode->prev = tail->next;
        tail->next = newNode;
        tail = tail->next;
    }

    printf("Do you want to continue(0,1): ");
    scanf("%d", &choice);
    }
}

void display()
{
    temp = head;
    printf("Linked List: ");
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }   
}

void main()
{
    create();
    display();
}