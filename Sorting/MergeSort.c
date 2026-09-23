// Merge Sort
#include<stdio.h>
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    for(int i=0; i<arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    for(int i=0; i<arr_size; i++)
        printf("%d ", arr[i]);
    return 0;


}
void merge(int arr[] , int p , int q , int r )
{
    int n1 = q-p+1;
    int n2 = r-q;
    int left[n1] , right[n2];
    for(int i=0; i<n1; i++)
    left[i] = arr[p+i];
    for(int j=0; j<n2; j++)
    right[j] = arr[q+1+j];

    int i , j , k;
    i = 0; j= 0 ; k =p ;

    while(i<n1 && j<n2)
    {
        if(left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
    }
    while(i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}