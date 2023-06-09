// implementation of queue using linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *front, *rear, *temp, *newNode;

// enqueue an element

void enqueue(int num)
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

// dequeue the first element

void dequeue()
{
    if(front == 0 && rear == 0)
    {
        printf("\nQueue is empty! Nothing to dequeue!!");
    }
    else
    {
        temp = front;
        front = front->next;
        printf("\nDequeued element: %d", temp->data);
        free(temp);
    }
}

// peek the front element

void peek()
{
    if(front == 0 && rear == 0)
    {
        printf("\nQueue is empty! Nothing to peek!!");
    }
    else
    {
        printf("\nFront element: %d", front->data);
    }
}

// display the queue

void display()
{
    if(front == 0 && rear == 0)
    {
        printf("Queue is empty!");
    }
    else
    {
        temp = front;
        printf("\nElements in the queue are: ");
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
        printf("\n0.Exit\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            printf("Exited Successfully!");
            break;

        case 1:
            printf("Enter the number: ");
            scanf("%d", &num);
            enqueue(num);
            break;

        case 2:
            dequeue();
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