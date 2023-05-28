//implementation of singly linked list

#include <stdio.h>
#include <stdlib.h>

struct node
    {
       int data;
       struct node *next;
    };

struct node *head = NULL, *newNode, *temp;

void display()
{
    temp = head;
    while (temp != 0)
    {
       printf("%d ", temp->data);
       temp = temp->next;
    }
}

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

void reverse()
{
    struct node *prevNode = NULL, *currentNode, *nextNode;

    currentNode = nextNode = head;
    while(nextNode != 0)
    {
        nextNode = nextNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }
    head = prevNode;
    display();
}

void main()
{
    int choice = 1, i = 1;

    while(choice)
    {
        newNode = (struct node*)(malloc(sizeof(struct node)));
    

    printf("Enter the number: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if(head == 0)
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
    
    temp = head;
    printf("Linked List: ");
    display();

//reverse Linked List

    printf("\nReversed Linked List: ");
    reverse();

}
