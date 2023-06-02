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
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }

    printf("Do you want to continue(0,1): ");
    scanf("%d", &choice);
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

//reverse the contents

void reverse()
{
    struct node *currentNode, *nextNode;

    currentNode = head;
    while (currentNode != 0)
    {
        nextNode = currentNode->next;
        currentNode->next = currentNode->prev;
        currentNode->prev = nextNode;
        currentNode = nextNode; 
    }
    currentNode = head;
    head = tail;
    tail = currentNode;
    //free(currentNode);
    free(nextNode);
}

void main()
{
    create();
    printf("Doubly Linked List: ");
    display();
    
    reverse();
    printf("\nReversed Doubly Linked List: ");
    display();
}
