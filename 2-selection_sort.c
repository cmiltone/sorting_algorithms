#include "sort.h"

/**
 * selection_sort - sorts an array on integers using selection sort
 * @array: integer array
 * @size: length of the array
 * Return: void
*/
void selection_sort(int *array, size_t size)
{
	int min, tmp, diff = 0;
	size_t k, i, index = 0;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (k = i + 1; k < size; k++)
		{
			if (min > array[k])
			{
				if (diff < min - array[k])
				{
					index = k;
					diff = min - array[k];
				}
			}
		}
		if (index > i)
		{
			tmp = array[i];
			array[i] = array[index];
			array[index] = tmp;
			print_array(array, size);
		}
		diff = 0;
	}
}
