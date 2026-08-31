#include <stdio.h>

void printArray(int arr[3][3])
{
    printf("2D Array:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void accessElement(int arr[3][3], int row, int col)
{
    printf("Element at row %d and column %d = %d",
           row, col, arr[row - 1][col - 1]);
}

int main()
{
    int arr[3][3];

    printf("Enter 9 elements:\n");

    // Input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print and traverse
    printArray(arr);

    // Access a particular element
    accessElement(arr, 2, 3);

    return 0;
}