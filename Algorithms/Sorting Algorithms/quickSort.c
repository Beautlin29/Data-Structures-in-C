// implementation of quick sort algorithm

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

// partitioning 

int partition(int array[], int lb, int ub) 
{
    int pivot = array[lb];
    int start = lb + 1;
    int end = ub;

    while (start <= end) 
    {
        while (array[start] <= pivot) 
        {
            start++;
        
        }
        while (array[end] > pivot) 
        {
            end--;
        }
        if (start < end) 
        {
            swap(&array[start], &array[end]);
        }
    }

    swap(&array[lb], &array[end]);

    return end;
}

// quick sort

void quickSort(int array[], int lb, int ub) 
{
    if (lb < ub) 
    {
        int loc = partition(array, lb, ub);
        quickSort(array, lb, loc - 1);
        quickSort(array, loc + 1, ub);
    }
}

void main() 
{
    int array[N] = {59, 23, 55, 11, 76, 56, 44, 99, 47, 22};

    printf("Unsorted array: ");
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", array[i]);
    }

    // function call
    quickSort(array, 0, N - 1);

    printf("\nSorted array: ");
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", array[i]);
    }    
}
