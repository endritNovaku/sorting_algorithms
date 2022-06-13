#include "sort.h"
/**
 * selection_sort - selection sort
 * @array: array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		tmp = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
				tmp = array[j];
			if (array[i] > tmp)
			{
				array[j] = array[i];
				array[i] = tmp;
			}

		}
		print_array(array, size);
	}
}
