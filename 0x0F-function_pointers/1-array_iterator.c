#include "function_pointers.h"

/**
  * array_iterator - function that iterates over an array
  * @array - array of integers
  * @size - array size
  * @action - function pointer to an array that takes an integer value returns void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
