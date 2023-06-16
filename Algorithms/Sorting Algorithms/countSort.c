// implementation of count sort algorithm

#include <stdio.h>
#include <stdlib.h>

#define N 10
#define K 99

void countSort(int array[])
{
    int count[K+1] = {0};
    int b[N], i;

    for(i = 0; i < N; i++)
    {
        ++count[array[i]];
    }

    for(i = 1; i <= K; i++)
    {
        count[i] += count[i-1];
    }

    for(i = N-1; i >= 0; i--)
    {
        b[--count[array[i]]] = array[i];
    }

    for(i = 0; i < N; i++)
    {
        array[i] = b[i];
    }
}

int main()
{
    int array[N] = {59, 23, 55, 11, 76, 56, 44, 99, 47, 22};
    int i;

    printf("Unsorted array: ");
    for(i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    // function call

    countSort(array);

    printf("\nSorted array: ");
    for(i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

