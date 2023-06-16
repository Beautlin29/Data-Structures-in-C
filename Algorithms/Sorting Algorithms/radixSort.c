// implementation of radix sort algorithm

#include <stdio.h>
#include <stdlib.h>

#define N 10
#define K 99

void radixSort(int array[], int n);

void countSort(int array[], int n, int pos);

int getMax(int array[], int n);

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

    radixSort(array, N);

    printf("\nSorted array: ");
    for(i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

void radixSort(int array[], int n)
{
    int max = getMax(array, n);

    for(int pos = 1; max/pos > 0; pos *= 10)
    {
        countSort(array, n, pos);
    }
}

void countSort(int array[], int n, int pos)
{
    int count[K+1] = {0};
    int b[N], i;

    for(i = 0; i < N; i++)
    {
        ++count[(array[i]/pos)%10];
    }

    for(i = 1; i <= K; i++)
    {
        count[i] += count[i-1];
    }

    for(i = N-1; i >= 0; i--)
    {
        b[--count[(array[i]/pos)%10]] = array[i];
    }

    for(i = 0; i < N; i++)
    {
        array[i] = b[i];
    }
}

int getMax(int array[], int n)
{
    int max = array[0];
    for(int i = 1; i < n; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
