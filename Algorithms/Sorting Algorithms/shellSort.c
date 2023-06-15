// implementation of shell sort algorithm

#include <stdio.h>
#include <stdlib.h>

#define N 10

// swap 

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    int array[N] = {59, 23, 55, 11, 76, 56, 44, 99, 47, 22};

    printf("Unsorted array: ");
    for(int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    // shell sort

    for(int gap = N/2; gap >= 1; gap /= 2)
    {
        for(int j = gap; j < N; j++)
        {
            for(int i = j-gap; i >= 0; i -= gap)
            {
                if(array[i+gap] > array[i])
                {
                    break;
                }
                else
                {
                    swap(&array[i+gap], &array[i]);
                }
            }
        }
    }

    printf("\nSorted array: ");
    for(int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }
}