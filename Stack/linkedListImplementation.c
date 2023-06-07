// implementation of stack using linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL, *temp, *newNode;

// push an element 

void push(int num)
{
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = num;
    newNode->next = top;
    top = newNode;
}

// pop the final element

void pop()
{
   temp = top;
   printf("Popped element: %d", top->data);
   top = top->next;
   free(temp); 
}

// peek the final element

void peek()
{
    if(top == NULL)
    {
        printf("\nNothing to peek!");
    }
    else
    {
        printf("\nPeeked element: %d", top->data);
    }
}

//display the slack

void display()
{
    temp = top;
    if(temp == NULL)
    {
        printf("\nUnderflow!");
    }    
    else
    {
        printf("\nElements in the stack: ");
        while(temp->next != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d ", temp->data);
    }
}

void main()
{
    int choice, num;

    do
    {
        printf("\n0.Exit\n1.Push\n2.Pop\n3.Peek\n4.Display\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            printf("Exited Successfully!");
            break;

        case 1:
            printf("Enter the number: ");
            scanf("%d", &num);
            push(num);
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        default:
            printf("Invalid Choice!");
            break;
        }
    }while (choice != 0 );   
}