#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int size = 3, sum = 0;
	int numbers[size];

	for(int i = 0; i < size; i++)
	{
		numbers[i] = i;
	}

	// Show the elements in the array.

	for(int j = 0; j < size; j++)
	{
		sum += numbers[j];
		printf("%d\t", numbers[j]);
	}


	printf("\nSum is: %i\n", sum);

	return 0;
}


