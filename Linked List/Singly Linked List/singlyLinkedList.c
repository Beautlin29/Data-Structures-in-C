//implementation of singly linked list

#include <stdio.h>
#include <stdlib.h>

void main()
{
    struct node
    {
       int data;
       struct node *next;
    };

    struct node *head = 0, *newNode, *temp;
    int choice = 1;

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
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }   
    
}