// implementation of insertion sort algorithm

#include <stdio.h>
#include <stdlib.h>

#define N 10

void main()
{
    int array[N] = {59, 23, 55, 11, 76, 56, 44, 99, 47, 22}, temp = 0;

    printf("Unsorted array: ");
    for(int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    // insertion sort

    for(int i = 1; i < N; i++)
    {
        temp = array[i];
        int j = i - 1;

        while(j >= 0 && array[j] > temp)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }

    printf("\nSorted array: ");
    for(int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }
}