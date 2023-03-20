#include <stdio.h>
#include <stdlib.h>

int search(int *arr, int value, int arr_size, int *status, int *found_index);

int found_item = -1, found_index, searched_value;

int main(void)
{
	printf("This is an array searching program\n");
	int size = 100;
	int *number = (int *)malloc(size * sizeof(int));

	// Populate the array.
	for (int i = 0; i < size; i++)
	{
		number[i] = i + (i - 1);
	}
	
	int value;   // The value the user wishes to search
	// print => The value was found at the x index of the array
	printf("Enter the element you wish to search for: ");
	scanf("%d", &value);
	int search_value = search(number, value, size, &found_item, &found_index);
	if (found_item == -1)
	{
		printf("The value was not found in the array");
	}
	else if(found_item == 1)
	{
		printf("The value %d was found at the index %d \n", search_value, found_index);
	}
	return 0;
}

int search(int *arr, int value, int arr_size, int *status, int *found_index)
{
	// Searches the value passed in to the function in the array of intergers passed in.
	
	// Loop through all the list till you find the value
	// if at the end of the list the value is not found
	// Return -1 else return value and its index;
	int res;
	for(int i = 0; i < arr_size; i++ )
	{
		if(arr[i] == value)
		{
			res = arr[i];
			*found_index = i;
			*status = 1;
			break;
		}
	}	
	return res;
}
