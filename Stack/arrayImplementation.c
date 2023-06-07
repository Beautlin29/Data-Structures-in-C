// implementation of stack using array

#define N 5
#include <stdio.h>
#include <stdlib.h>

int stack[N], top = -1, num;

// push an element 

void push(int num)
{
    if(top == N-1)
    {
        printf("Overflow!");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}

// pop the final element

void pop()
{
    if(top == -1)
    {
        printf("Underflow!");
    }
    else
    {
        int item;
        item = stack[top];
        printf("\nPoped element: %d", item);
        top--;
    }
}

// peek the final element

void peek()
{
    if(top == -1)
    {
        printf("\nUnderflow!");
    }
    else
        printf("\nPeeked element: %d" ,stack[top]);
}

//display the slack

void display()
{
    printf("\nElements in the stack are : ");
    for(int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
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