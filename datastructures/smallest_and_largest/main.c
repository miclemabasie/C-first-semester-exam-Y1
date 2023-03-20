#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int size = 100;
	int *numbers = (int *)malloc(size * sizeof(int));

	for(int i = 0; i < size; i++)
	{
		numbers[i] = i;
	}
	// find small and large
	int small = numbers[0], large = numbers[size -1 ];
	for (int j = 0; j < size; j++)
	{
		if(numbers[j] < small)
			small = numbers[j];
		if(numbers[j] > large)
			large = numbers[j];
	}
	printf("The smallest numbers is: %d, and largest is %d\n", small, large);
	return 0;
}
