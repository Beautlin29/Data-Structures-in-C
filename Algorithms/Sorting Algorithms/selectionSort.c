// implementation of selection sort

#include <stdio.h>
#include <stdlib.h>

#define N 10

void main()
{
    int array[N] = {59, 23, 55, 11, 76, 56, 44, 99, 47, 22}, i, j, min;

    printf("Unsorted array: ");
    for(int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    // selection sort

    for(i = 0; i < N-1; i++)
    {
        min = i;

        for(j = i+1; j < N; j++)
        {
            if(array[j] < array[min])
            {
                min = j;
            }
            if(min != i)
            {
                int temp = array[i];
                array[i] = array[min];
                array[min] = temp;
            }
        }
    }


    printf("\nSorted array: ");
    for(int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }
}