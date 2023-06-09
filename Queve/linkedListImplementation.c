// implementation of queve using linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *front, *rear, *temp, *newNode;

// enqueve an element

void enqueve(int num)
{
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = num;
    newNode->next = NULL;

    if (front == 0 && rear == 0)
    {        
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

// dequeve the first element

void dequeve()
{
    if(front == 0 && rear == 0)
    {
        printf("\nQueve is empty! Nothing to dequeve!!");
    }
    else
    {
        temp = front;
        front = front->next;
        printf("\nDequeved element: %d", temp->data);
        free(temp);
    }
}

// peek the front element

void peek()
{
    if(front == 0 && rear == 0)
    {
        printf("\nQueve is empty! Nothing to peek!!");
    }
    else
    {
        printf("\nFront element: %d", front->data);
    }
}

// display the queve

void display()
{
    if(front == 0 && rear == 0)
    {
        printf("Queve is empty!");
    }
    else
    {
        temp = front;
        printf("\nElements in the queve are: ");
        while(temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void main()
{
    int choice, num;

    do
    {
        printf("\n0.Exit\n1.Enqueve\n2.Dequeve\n3.Peek\n4.Display\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            printf("Exited Successfully!");
            break;

        case 1:
            printf("Enter the number: ");
            scanf("%d", &num);
            enqueve(num);
            break;

        case 2:
            dequeve();
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