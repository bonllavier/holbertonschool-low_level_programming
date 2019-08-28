#include "search_algos.h"
/**
 * linear_search - linear search
 *@array: parent of the actual node
 *@size: value to be inserted
 *@value: value to be searched
 * Return: direction of the new node.
 */
int linear_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		unsigned int x = 0;

		for (x = 0; x < size ; x++)
		{
			printf("Value checked array[%d] = [%d]\n", x, *(array + x));
			if (*(array + x) == value)
			{
				return (x);
			}
		}
		return (-1);
	}
	else
	{
		return (-1);
	}
}
