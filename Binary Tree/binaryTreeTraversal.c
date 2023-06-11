// implementation of binary tree traversal

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};


// creating binary tree

struct node *create()
{
    int num;
    struct node *newNode = NULL;
    printf("\nEnter the data(-1 for no node): ");
    scanf("%d", &num);
    if (num == -1)
    {
        return NULL;
    }
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = num;
    printf("Left data to %d: ", num);
    newNode->left = create();
    printf("Right data to %d: ", num);
    newNode->right = create();
    return newNode;
}

// preorder traversal

void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

// postorder traversal

void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

// inorder traversal

void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void main()
{
    struct node *root = NULL;
    root = create();
    printf("Pre-order traversal: ");
    preorder(root);
    printf("\nPost-order traversal: ");
    postorder(root);
    printf("\nInorder traversal: ");
    inorder(root);
}
