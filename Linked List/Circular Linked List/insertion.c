//implementation of circular linked list

#include <stdio.h>
#include <stdlib.h>

struct node
    {
       int data;
       struct node *next;
    };

struct node *tail = NULL, *newNode, *temp;

void create()
{
    
    int choice = 1;

    while(choice)
    {
        newNode = (struct node*)(malloc(sizeof(struct node)));
    

    printf("Enter the number: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if(tail == NULL)
    {
        tail = temp = newNode;
    }
    else
    {
        temp->next = newNode;
        temp = temp->next;
    }
    printf("Do you want to continue(0,1): ");
    scanf("%d", &choice);
    }  
    temp->next = tail;  
}

int size()
{
    int count = 1;
    temp = tail;
    while(temp->next != tail)
    {
        temp = temp->next;
        count++;
    } 
    return count;
}

void display()
{
    temp = tail;
    while (temp->next != tail)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }   
    printf("%d", temp->data);
}

void insertAtBeg()
{
    printf("Enter the number to be inserted at the beginning: ");
    newNode = (struct node*)(malloc(sizeof(struct node))); 
    scanf("%d", &newNode->data);
    if(tail == NULL)
    {
        tail = newNode;
        tail->next = tail;
    }
    else
    {
        newNode->next = tail;

    }
}

void insertAtEnd()
{

}

void insertAtPos()
{

}

void main()
{
    create();
    printf("Circular Linked List: ");
    display();

    insertAtBeg();
    printf("Circular Linked List after insertion at the beginning: ");
    display();

    insertAtEnd();
    printf("Circular Linked List after insertion at the end: ");
    display();

    insertAtPos();
    printf("Circular Linked List after insertion at the given position: ");
    display();
}