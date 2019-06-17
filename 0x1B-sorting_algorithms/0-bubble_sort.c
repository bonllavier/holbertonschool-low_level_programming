#include "sort.h"

/**
 *bubble_sort - Entry point
 *@array: array
 *@size: size
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	int tmp_num = 0;
	int ver_unorder = 1;

	if (array != NULL && size >= 2)
	{
		while (ver_unorder == 1)
		{
			ver_unorder = 0;
			for (i = 0 ; i < size ; i++)
			{
				if (*(array + i) > *(array + i + 1) && i < (size - 1))
				{
					tmp_num = *(array + i + 1);
					*(array + i + 1) = *(array + i);
					*(array + i) = tmp_num;
					print_array(array, size);
					ver_unorder = 1;
				}
			}
		}
	}
}
