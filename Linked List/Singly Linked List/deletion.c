//implementation of singly linked list

#include <stdio.h>
#include <stdlib.h>

struct  node
{
    int data;
    struct node *next;
};

struct node *head = 0, *temp, *newNode, *prevNode, *nextNode;

void display()
{
    temp = head;
    while(temp != 0)
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
    int choice = 1, i = 1, pos;

 
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

//deletion at the beginning

    temp = head;
    head = head->next;
    //temp->next = NULL;
    free(temp);

    printf("\nLinked List after deletion at the beginning: ");
    display();

//deletion at the end

    temp = head;
    while(temp->next != NULL)
    {
        prevNode = temp;
        temp = temp->next;  
    }
    prevNode->next = NULL;
    free(temp);
    printf("\nLinked List after deletion at the end: ");
    display();

//deletion at a given position

    printf("\nEnter the postion of the number to be deleted: ");
    scanf("%d", &pos);

    if(pos <= 0 || pos > size())
    {
        printf("Invalid position!");
    }
    else if(pos == 1)
    {
        printf("Dude... You just deleted the first node! Are you trying to start a revolution?");
    }
    else
    {
        i = 1;
        temp = nextNode = head;
        while(i < pos-1)
        {
            temp = temp->next;
            i++;
        }
        nextNode = temp->next;
        temp->next = nextNode->next;
        free(nextNode);
    }

    printf("\nLinked List after deletion at the given position: ");
    display();  

}