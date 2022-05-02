#include "search_algos.h"

/**
 * binary_search - function that searches for a value
 * in a sorted array of integers using the Binary search
 * algorithm
 * @array: Array
 * @size: Size of array
 * @value: Value to be searched
 *
 * Return: Value if present. If not then -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t x = 0, z, mid;

	size = size - 1;

	if (array == NULL)
		return (-1);

	while (x <= size)
	{
		printf("Searching in array: ");
		for (z = x; z < size + 1; z++)
		{
			if (z == size)
				printf("%d", array[z]);
			else
				printf("%d, ", array[z]);
		}
		printf("\n");

		mid = (x + size) / 2;
		if (array[mid] < value)
			x = mid + 1;
		else if (array[mid] > value)
			size = mid - 1;
		else
			return (value);
	}
	return (-1);
}
