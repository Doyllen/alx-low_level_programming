#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator- prints each element of array on a new line
 * @array: the array
 * @size: number of array element to print
 * @action: pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
