// implementation of merge sort algorithm

#include <stdio.h>
#include <stdlib.h>

#define N 10

// merge

void merge(int array[], int lb, int mid, int ub)
{
    int i = lb, j = mid + 1, k = lb;
    int array_b[N];  

    while (i <= mid && j <= ub)
    {
        if (array[i] <= array[j])
        {
            array_b[k] = array[i];
            i++;
        }
        else
        {
            array_b[k] = array[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        array_b[k] = array[i];
        i++;
        k++;
    }

    while (j <= ub)
    {
        array_b[k] = array[j];
        j++;
        k++;
    }

    // Copy the merged array back to the original array

    for (int m = lb; m <= ub; m++)
    {
        array[m] = array_b[m];
    }
}

// merge sort

void mergeSort(int array[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergeSort(array, lb, mid);
        mergeSort(array, mid + 1, ub);
        merge(array, lb, mid, ub);
    }
}

int main()
{
    int array[N] = {59, 23, 55, 11, 76, 56, 44, 99, 47, 22};

    printf("Unsorted array: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    // function call
    
    mergeSort(array, 0, N - 1);

    printf("\nSorted array: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
