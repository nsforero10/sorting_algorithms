#include "sort.h"

/**
 * split - splits the array
 * @array: the array
 * @lo: lower
 * @hi: higher
 * @size: the size of the array
 * Return: index of partition
 */

int split(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi], i = lo, j = lo, tmp;

	while (j < hi)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				tmp = array[i], array[i] = array[j], array[j] = tmp;
				print_array(array, size);
			}
			i++;
		}
		j++;
	}
	if (i != hi)
	{
		tmp = array[i], array[i] = array[hi], array[hi] = tmp;
		print_array(array, size);
	}
	return (i);
}

/**
 * recursion - recursive function to quicksort
 * @array: the array
 * @lo: lower
 * @hi: higher
 * @size: the size of the array
 */

void recursion(int *array, int lo, int hi, size_t size)
{
	int r;

	if (lo < hi)
	{
		r = split(array, lo, hi, size);
		recursion(array, lo, r - 1, size);
		recursion(array, r + 1, hi, size);
	}
}
/**
 * quick_sort - sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: the array
 * @size: the size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array && size >= 2)
		recursion(array, 0, size - 1, size);
}

