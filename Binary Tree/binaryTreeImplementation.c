// implementation of binary tree using linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
} *root = NULL, *newNode;


// creating binary tree

struct node *create()
{
    int num;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data(-1 for no node): ");
    scanf("%d", &num);
    if(num == -1)
    {
        return 0;
    }
    newNode->data = num;
    printf("Left data: ");
    newNode->left = create();
    printf("Right data: ");
    newNode->right = create();
    return newNode;
}

void main()
{
    root = create();
}
