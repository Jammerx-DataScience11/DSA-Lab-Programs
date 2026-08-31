#include <stdio.h>

void insert(int arr[], int *n, int pos, int value)
{
    for (int i = *n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    (*n)++;
}

void display(int arr[], int n)
{
    printf("Array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int arr[100], n, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position for insertion: ");
    scanf("%d", &pos);

    printf("Enter element: ");
    scanf("%d", &value);

    insert(arr, &n, pos, value);

    display(arr, n);

    return 0;
}