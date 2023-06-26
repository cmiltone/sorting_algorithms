#include "sort.h"

/**
 * quick_sort - sorts an array on integers using quick sort algorithm
 * @array: integer array
 * @size: legnth of the array
*/

void quick_sort(int *array, size_t size)
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

int part(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j, tmp;

	for (j = low; j < high; j++)
	{
		if (pivot >= array[j])
		{
			i += 1;
			if (array[i] != array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		tmp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}

	return (i + 1);
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
		partition = part(array, low, high, size);
		sort(array, low, partition - 1, size);
		sort(array, partition + 1, high, size);
	}
}
