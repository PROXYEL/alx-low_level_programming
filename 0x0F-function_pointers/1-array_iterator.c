#include "function_pointers.h"
#include <stdlo.h>
/**
 * array_iterator - prints each array else on a newl
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || acton == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
