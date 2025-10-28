#include <stdio.h>

void visualizeArray(double* array, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%i ", array[i]);
        for (int j = 0; j < array[i]; j++)
        {
            printf('#');
        }
        printf("\n");
    }
    return;
}