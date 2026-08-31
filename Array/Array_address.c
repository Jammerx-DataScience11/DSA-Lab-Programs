#include <stdio.h>

int main()
{
    int arr[5];

    printf("Enter 5 elements:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nAddress of array elements:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Address of arr[%d] = %p\n", i, (void *)&arr[i]);
    }

    return 0;
}