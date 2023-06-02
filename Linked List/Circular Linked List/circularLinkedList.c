//implementation of circular linked list

#include <stdio.h>
#include <stdlib.h>

struct node
    {
       int data;
       struct node *next;
    };

struct node *head = NULL, *newNode, *temp;

void create()
{
    
    int choice = 1;

    while(choice)
    {
        newNode = (struct node*)(malloc(sizeof(struct node)));
    

    printf("Enter the number: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if(head == NULL)
    {
        head = temp = newNode;
    }
    else
    {
        temp->next = newNode;
        temp = temp->next;
    }
    printf("Do you want to continue(0,1): ");
    scanf("%d", &choice);
    }  
    temp->next = head;  
}

void display()
{
    temp = head;
    while (temp->next != head)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }   
    printf("%d", temp->data);
}

void main()
{
    create();
    printf("Circular Linked List: ");
    display();
}