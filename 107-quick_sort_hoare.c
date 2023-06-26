#include "sort.h"
#include <stdio.h>

/**
 * quick_sort_hoare - sorts an array on integers using quick sort algorithm
 * @array: integer array
 * @size: legnth of the array
*/

void quick_sort_hoare(int *array, size_t size)
{
	sort(array, 0, size - 1, size);
}

/**
 * part - Lomuto partition
 * @array: the array
 * @low: integer
 * @high: integer
 * @size: size of arrar
 * Return: integer
*/

int part2(int *array, int low, int high, size_t size)
{
	int pivot = array[low];
	int i = low - 1;
	int j = high + 1;
	int tmp;
	(void)size;

	while (1)
	{		
		do
		{
			i += 1;
		} while (array[i] < pivot);

		do
		{
			j -= 1;
		} while (array[j] > pivot);

		if (i >= j)
			return j;
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
		print_array(array, size);
	}
	return (-1);
}

/**
 * sort - performs sort recursively
 * @array: the array of ints
 * @low: int
 * @high: int
 * @size: size of array
 * Return: void
*/

void sort(int *array, int low, int high, size_t size)
{
	int partition;

	if (low < high)
	{
		partition = part2(array, low, high, size);
		sort(array, low, partition, size);
		sort(array, partition + 1, high, size);
	}
}
