#include "sort.h"

/**
 * bubble_sosrt - sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array
 *
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0, j;
	int aux;

	if (size < 2)
		return;

	while ( i <  size - 1)
	{
		j = 0;
		while ( j < size - 1 )
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];

				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
			j++;
		}
		i++;
	}
}
