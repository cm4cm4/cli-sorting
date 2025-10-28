#include <stdio.h>

void visualizeArray(long* array, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%li ", array[i]);
        for (int j = 0; j < array[i]; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return;
}