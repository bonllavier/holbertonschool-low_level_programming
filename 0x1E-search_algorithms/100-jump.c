#include "search_algos.h"
/**
 * jump_search - linear search
 *@array: parent of the actual node
 *@size: value to be inserted
 *@value: value to be searched
 * Return: direction of the new node.
 */
int jump_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		unsigned int step = sqrt(size);
		unsigned int prev = 0;

		while (array[min(step, size)-1] < value)
		{
			prev = step;
			step += sqrt(size);
			printf("Value checked array[%d] = [%d]\n",prev,step);
			if (prev >= size)
				return (-1);
		}
		while (array[prev] < value)
		{
			prev++;
			printf("check2 < \n");
			if (prev == min(step, size))
				return (-1);
		}
		if (array[prev] == value)
			printf("Value found between indexes [%d] and [%d]\n",prev, value);
			return prev;
		return (-1);
	}
	else
	{
		return (-1);
	}
	return (-1);
}
