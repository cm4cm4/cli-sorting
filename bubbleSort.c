#include <stdio.h>

void bubbleSort(long* array, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int swapped = 0;
		for (int j = 0; j < len - 1; j++)
		{
			if (array[j] > array[j+1])
			{
			int temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
			swapped = 1;
			}
		}
		if (swapped == 0)
		{
			break;
		}
	
	}
	return;
}
