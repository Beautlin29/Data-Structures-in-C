// implementation of linear search

#define N 10

void linearSearch(int array[],int data)
{
    int found = 0;

    for(int i = 0; i < N; i++)
    {
        if(array[i] == data)
        {
            found = 1;
            printf("Element %d is found in the index %d", data, i);
        }
    }

    if(found == 0)
    {
        printf("Element %d is not in the given array!", data);
    }
}


void main()
{
    int num, array[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Enter the element to be found: ");
    scanf("%d", &num);
    linearSearch(array, num);

}