#include <stdio.h>

void delete(int arr[], int *n, int pos)
{
    for (int i = pos - 1; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    (*n)--;
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
    int arr[100], n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position for deletion: ");
    scanf("%d", &pos);

    delete(arr, &n, pos);

    display(arr, n);

    return 0;
}