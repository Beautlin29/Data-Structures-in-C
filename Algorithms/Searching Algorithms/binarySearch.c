// implementation of binary search

#define N 10

int binarySearch(int array[], int data)
{
    int left = 0, right = N-1;

    while(left <= right)
    {
        int mid = (left + right) / 2;

        if(data == array[mid])
        {
            return mid;
        }
        else if(data < array[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}


void main()
{
    int num, array[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Enter the element to be found: ");
    scanf("%d", &num);
    int index = binarySearch(array, num);

    if(index == -1)
    {
        printf("Element is not found!");
    }
    else
    {
        printf("Element %d is found at index %d", num, index);
    }
}