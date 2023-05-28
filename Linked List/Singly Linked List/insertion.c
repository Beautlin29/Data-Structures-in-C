//implementation of singly linked list

#include <stdio.h>
#include <stdlib.h>

struct node
    {
       int data;
       struct node *next;
    };

struct node *head = 0, *newNode, *temp;

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
 
//insertion at the beginning

    printf("\nEnter the number to be inserted at the beginning: ");
    newNode = (struct node*)(malloc(sizeof(struct node)));
    scanf("%d", &newNode->data);
    newNode->next = head;
    head = newNode;
    
    printf("Linked List after insertion at the beginning: ");
    display();

//insertion at the end

    printf("\nEnter the number to be inserted at the end: ");
    newNode = (struct node*)(malloc(sizeof(struct node)));
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    
    temp = head;
    while (temp->next != 0)
    {
       temp = temp->next;
    }
    temp->next = newNode;

    printf("Linked List after insertion at the end: ");
    display();

//insertion at any location

    int pos;
    printf("\nEnter the position of the number to be inserted(position = index + 1): ");
    scanf("%d", &pos);

    if(pos < 1 || pos > size())
    {
        printf("Invalid Position!");
    }
    else
    {
        printf("Enter the number to be inserted: ");
        newNode = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &newNode->data);
        
        i =1;
        temp = head;
        while (i < pos-1)
        {
            temp = temp->next;
            i++;
        }
        
        newNode->next = temp->next;
        temp->next = newNode;
    }

    printf("\nLinked List after insertion at the given position: ");
    display();

}

