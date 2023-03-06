#include <stdio.h>

int main()
{
    int size;
    printf("Input size of array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Input elements of  array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("The element at %d postion of the array is : %d \n", i, arr[i]);
    }
    return 0;
}