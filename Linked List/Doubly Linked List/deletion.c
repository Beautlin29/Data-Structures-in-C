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

//delete at the beginning

void delAtBeg()
{
    if(head == NULL)
    {
        printf("\nEmpty List!");
    }
    else
    {
        temp = head;
        head = temp->next;
        head->prev = NULL;
        free(temp);
    }
}

//delete at the end

void delAtEnd()
{
    if(tail == NULL)
    {
        printf("\nEmpty List");
    }
    else
    {
        temp = tail;
        tail = temp->prev;
        tail->next = NULL;
        free(temp);
    }
}


//delete at the given position

void delAtPos()
{
    int pos, i=1;
    printf("\nEnter the position of the number to be deleted: ");
    scanf("%d", &pos);
    if(pos == 1)
    {
        delAtBeg();
        printf("\nDoubly Linked List after deletion at the beginning: ");
        display();  
    }
    else if(pos == size())
    {
        delAtEnd();
        printf("\nDoubly Linked List after deletion at the end: ");
        display();   
    }
    else
    {
        temp = head;
        while(i < pos)
        {
            temp = temp->next;
            i++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
}

void main()
{
    create();
    printf("Doubly Linked List: ");
    display();
    
    delAtBeg();
    printf("\nDoubly Linked List after deletion at the beginning: ");
    display();

    delAtEnd();
    printf("\nDoubly Linked List after deletion at the end: ");
    display();

    delAtPos();
    printf("Doubly Linked List after deletion at the given position: ");
    display();

}