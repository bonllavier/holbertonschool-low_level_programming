#include "search_algos.h"
/**
 * binary_search - b search
 *@array: parent of the actual node
 *@size: value to be inserted
 *@value: value to be searched
 * Return: direction of the new node.
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	size_t r = size - 1;

	if (array != NULL)
	{
		return (binarySearch(array, l, r, value));
	}
	else
	{
		return (-1);
	}
	return (-1);
}
/**
 * binarySearch - binary search
 *@arr: parent of the actual node
 *@l: value to be inserted
 *@r: value to be searched
 *@x: value to be searched.
 * Return: direction of the new node.
 */
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2;
		int cont = l;
		int cont2 = 0;

		printf("Searching in array: ");
		for (cont = l ; cont <= r; cont++)
		{
			if (cont2 > 0)
				printf(", ");
			printf("%d", arr[cont]);
			cont2++;
		}
		printf("\n");
		if (arr[mid] == x)
			return (mid);
		if (arr[mid] > x)
			return (binarySearch(arr, l, mid - 1, x));
		return (binarySearch(arr, mid + 1, r, x));
	}
	return (-1);
}
