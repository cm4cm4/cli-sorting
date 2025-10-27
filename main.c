#include <stdio.h>
#include <cs50.h>
#include "sorts.h"

int main(void)
{
    printf("Welcome to cli-sort ing\n\n");

    const int len = get_int("What is the length of the array?\n");
    double array[len];
    double *ptrArray = &array;

    printf("\n");

    for (int i = 0; i < len; i++)
    {
        int element = get_double("Value for element %i: ",i);
        array[i] = element;
    }

    printf("\n");
    visualizeArray(&array, len);
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
        selectionSort(ptrArray, len);
    }    
    return 0;
}