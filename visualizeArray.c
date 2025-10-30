#include <stdio.h>

void visualizeArray(long* array, int len)
{
	int max = array[0];
    for (int i = 1; i < len; i++)
	if (array[i] > max) max = array[i];
	
    int width = 0;
    while (max > 0)
	{
		width++;
		max /= 10;
	}
    for (int i = 0; i < len; i++)
    {
   printf("%*li | ",width ,array[i]);
        for (int j = 0; j < array[i]; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return;
}
