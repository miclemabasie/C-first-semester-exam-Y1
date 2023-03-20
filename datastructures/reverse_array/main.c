#include <stdio.h>
#include <stdlib.h>

void reverse(int *arr, int size);

int main(void)
{
	int size = 10;
	int *numbers = (int *)malloc(size * sizeof(int));
	// Assign items to the array 
	for(int i = 0; i < size; i++)
	{
		numbers[i] = i + (i - 1);
	}
	// Show array before the reverse takes place
	printf("Original array.\n[ ");
	for(int i = 0; i < size; i++)
	{
		printf("%d  ", numbers[i]);
	}
	printf("]\n");
	reverse(numbers, size);

	// Show the array after sorting
	printf("Reversed array.\n[ ");
	for(int j = 0; j < size; j++)
	{
		printf("%d  ", numbers[j]);
	}
	printf("]\n");
	return 0;
}

void reverse(int *arr, int size)
{
	int temp;
	int i = 0, j = size -1;
	for(i, j; i < size / 2; i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	return;
}
