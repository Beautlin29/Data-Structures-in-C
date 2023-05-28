//implementation of doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct node
    {
       int data;
       struct node *prev, *next;
    };

struct node *head = NULL, *newNode, *tail, *temp;

//create doubly linked list

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

//length of the list

int size()
{
    int count = 0;
    temp = head;
    while(temp != 0)
    {
        temp = temp->next;
        count++;
    } 
    return count;
}

//insertion at the beginning

void insertAtBeg()
{
    printf("\nEnter the number to be inserted at the beginning: ");
    newNode = (struct node*)(malloc(sizeof(struct node))); 
    scanf("%d", &newNode->data);
    newNode->prev = NULL;
    newNode->next = NULL;
    
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

//insertion at the end

void insertAtEnd()
{
    printf("\nEnter the number to be inserted at the end: ");
    newNode = (struct node*)(malloc(sizeof(struct node))); 
    scanf("%d", &newNode->data);
    newNode->prev = NULL;
    newNode->next = NULL;
    
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

//insert at a given position

void insertAtPos()
{
    int pos;
    printf("\nEnter the position of the number to be inserted: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > size())
    {
        printf("Invalid Position!");
    }
    else if (pos == 1)
    {
        insertAtBeg();
        printf("Doubly Linked List after insertion at the beginning: ");
        display();
    }
    else
    {
        int i = 1;
        printf("Enter the number to be inserted at the given position: ");
        newNode = (struct node*)(malloc(sizeof(struct node))); 
        scanf("%d", &newNode->data);

        temp = head;
        while(i < pos-1)
        {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next->prev = newNode;
        } 
}

//display the contents

void display()
{
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }   
}

void main()
{
    create();
    printf("Doubly Linked List: ");
    display();
    
    insertAtBeg();
    printf("Doubly Linked List after insertion at the beginning: ");
    display();

    insertAtEnd();
    printf("Doubly Linked List after insertion at the end: ");
    display();

    insertAtPos();
    printf("Doubly Linked List after insertion at the given position: ");
    display();

}