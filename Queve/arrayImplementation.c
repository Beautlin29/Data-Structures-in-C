// implementation of queve using array

#include <stdio.h>
#include <stdlib.h>

#define N 5

int queue[N];
int front = -1;
int rear = -1;

// enqueue an element
void enqueue(int num) 
{
    if (rear == N - 1)
    {
        printf("\nOverflow!");
    } 
    else 
    {
        if (front == -1) 
        {
            front = 0;
        }
        rear++;
        queue[rear] = num;
        printf("\nEnqueued element: %d", num);
    }
}

// dequeue the front element
void dequeue() 
{
    if (front == -1 || front > rear) 
    {
        printf("\nUnderflow!");
    } 
    else 
    {
        printf("\nDequeued element: %d", queue[front]);
        front++;
        if (front > rear) 
        {
            front = rear = -1;
        }
    }
}

// peek at the front element
void peek() 
{
    if (front == -1 || front > rear) 
    {
        printf("\nUnderflow!");
    } 
    else 
    {
        printf("\nFront element: %d", queue[front]);
    }
}

// display the queue
void display() {
    if (front == -1 || front > rear)
    {
        printf("\nQueue is empty!");
    } 
    else 
    {
        printf("\nElements in the queue are: ");
        for (int i = front; i <= rear; i++) 
        {
            printf("%d ", queue[i]);
        }
    }
}

int main() {
    int choice, num;

    do {
        printf("\n0.Exit\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                printf("\nExited Successfully!");
                break;
            case 1:
                printf("\nEnter the number: ");
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
                printf("\nInvalid Choice!");
                break;
        }
    } while (choice != 0);

    return 0;
}
