#include "function_pointers.h"

/**
  * int_index - integer search function
  * @array: pointer to array of int
  * @size: int size
  * @cmp: function pointer (takes int)
  * description: interger search
  * Return: integer val
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (k = 0; k < size; k++)
		{
			cmp(array[k]);
			if (cmp(array[k]) == 1)
			{
				return (k);
			}
		}
	}
	return (-1);
}
