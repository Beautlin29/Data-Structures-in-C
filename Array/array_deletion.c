#include<stdio.h>

void main()
{
    int a[50], size, i, num, pos;
    
    printf("Enter the size of the array(less than 50): ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);

    if(pos<=0 || pos>size)
    {
        printf("Invalid position!");
    }
    else
    {
        for(i=pos-1; i <=size-1; i++)
        {
            a[i] =  a[i+1];
        }
        size--;

        printf("The elements of the array after deletion: ");
        for(i=0; i<size; i++)
        {
            printf("%d ",a[i]);
        }
    }

}