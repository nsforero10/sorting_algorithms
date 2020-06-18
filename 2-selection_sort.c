#include "sort.h"

/**
 * selection_sort - sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: the array
 * @size: the size
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j, k;
	int tmp;

	if (size < 2)
		return;
	while (i < size)
	{
		k = i, tmp = array[i], j = i + 1;
		while (j < size)
		{
			if (array[j] < tmp)
				tmp = array[j], k = j;
			j++;
		}
		if (k != i)
		{
			array[k] = array[i], array[i] = tmp;
			print_array(array, size);
		}
		i++;
	}
}
