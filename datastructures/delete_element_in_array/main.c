#include <stdio.h>
#include <stdlib.h>

void delete(int *arr, int size, int value);

int main(int argc, char const *argv[])
{
    int size = 6;
    // Dynamically allocate memory for the the pointes in the array
    int *array = (int *)malloc(size * sizeof(int));

    // Create value for the pointers in the array
    for (int i = 0; i < size; i++)
    {
        array[i] = i;
    }
    // Show the array before the deletion takes place
    printf("Original Array.\n[ ");

    for(int i = 0; i < size; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("]\n");
    delete(array, size, 3);
    // Show array after the deletion of item
    printf("After Deletion.\n[ ");
    for(int i = 0; i < size - 1; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("]\n");

    return 0;
}

void delete(int *arr, int size, int value)
{
    int value_index = 0;
    for(int j = 0; j < size; j++)
    {   
        if(arr[j] == value)
        {
            value_index = j;
            // printf("Found  array: %d, index %d, J: %d\n", arr[j], value_index, j);
            break;
        }
    }
    // printf("value of index %d\n", value_index);
    if(!value_index)
    {
        printf("The value was not found in the array.\n");
    }
    else if(value_index > 0)
    {
        
        for(int i = value_index; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
    return;
}