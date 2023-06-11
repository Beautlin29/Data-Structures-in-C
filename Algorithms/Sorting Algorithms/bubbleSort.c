// optimized implementation of bubble sort algorithm

#include <stdio.h>
#include <stdlib.h>

#define N 10

void main()
{
    int array[N] = {59, 23, 55, 11, 76, 56, 44, 99, 47, 22}, temp = 0, swap = 0;

    printf("Unsorted array: ");
    for(int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    for(int i = 0; i < N-1; i++)
    {
        swap = 0;

        for(int j = 0; j < N-i-1; j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swap = 1;
            }
        }
        if(swap == 0)
        {
            break;  
        }
    }

    printf("\nSorted array: ");
    for(int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

}

