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
    
    printf("Enter the element to be inserted: ");
    scanf("%d", &num);

    printf("Enter the position to be inserted: ");
    scanf("%d", &pos);

    if(pos<=0 || pos>size+1)
    {
        printf("Invalid position!");
    }
    else
    {
        for(i=size-1; i >=pos-1; i--)
        {
             a[i+1] = a[i];
        }
        a[pos-1] = num;
        size++;

        printf("The elements of the array after insertion: ");
        for(i=0; i<size; i++)
        {
            printf("%d ",a[i]);
        }
    }

}