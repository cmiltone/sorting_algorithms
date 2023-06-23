#include "sort.h"

/**
 * bubble_sort - sorts array of integers
 * using bubble sort algorithm
 *
 * @array: an array of integers
 * @size: the size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t k, l;
	int tmp;

	if (size < 2)
		return;

	for (k = 0; k < size; k++)
	{
		for (l = 0; l < size - 1; l++)
		{
			if (array[l] > array[l + 1])
			{
				tmp = array[l];
				array[l] = array[l + 1];
				array[l + 1] = tmp;

				print_array(array, size);
			}
		}
	}
}
