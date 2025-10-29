#include <stdio.h>
#include <cs50.h>
#include "sorts.h"

int main(void)
{
    printf("Welcome to cli-sort ing\n\n");

    const int len = get_long("What is the length of the array?\n");
    long array[len];

    printf("\n");

    for (int i = 0; i < len; i++)
    {
        long element = get_long("Value for element %i: ",i);
        array[i] = element;
    }

    printf("\n");
    visualizeArray(array, len);
    printf("\n");

    printf("1. Selection sort\n2. Bubble sort\n3. Merge sort\n\n");

    int choice;

    do
    {
        choice = get_int("Which algorithm do you want to use?\n");
    } while (choice < 0 || choice > 3);

    printf("\n");

    if (choice == 1)
    {
        selectionSort(array, len);
    }    
    else if (choice == 2) 
    {
	bubbleSort(array, len);
    }
	
	visualizeArray(array, len);
    return 0;
}
