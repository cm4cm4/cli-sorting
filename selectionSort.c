#include <stdio.h>

void selectionSort(double* array, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int lowestIndex = i;
        for (int j = i+1; j < len; j++)
        {
            if (array[j] < array[lowestIndex])
            {
                lowestIndex = j;
            } 
        }

        int temp = array[i];
        array[i] = array[lowestIndex];
        array[lowestIndex] = temp;
    }
}
