#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: pointer to array
 * @size: num of elements in array
 * @value: value to search for
 *
 * Return: First index where value is located. If value is not present
 * in array or if array is NULL, return -1
 */


int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (array[x] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
			return (x);
		}
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}
	return (-1);
}
