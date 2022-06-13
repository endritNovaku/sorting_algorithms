#include "sort.h"
/**
 * bubble_sort - sort an array from smallest to highest
 * @array: the array
 * @size: size of the arr
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int tmp;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
