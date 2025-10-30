#include <stdio.h>
#include <stdlib.h>

// Helper function to merge two sorted halves
void merge(long* array, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    long* L = (long*)malloc(n1 * sizeof(long));
    long* R = (long*)malloc(n2 * sizeof(long));

    // Copy data to temp arrays
    for (int i = 0; i < n1; i++)
        L[i] = array[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = array[mid + 1 + j];

    int i = 0, j = 0, k = left;

    // Merge temp arrays back into main array
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            array[k++] = L[i++];
        else
            array[k++] = R[j++];
    }

    // Copy remaining elements
    while (i < n1)
        array[k++] = L[i++];
    while (j < n2)
        array[k++] = R[j++];

    free(L);
    free(R);
}

// Internal recursive function
void mergeSortRecursive(long* array, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSortRecursive(array, left, mid);
        mergeSortRecursive(array, mid + 1, right);
        merge(array, left, mid, right);
    }
}

// The required function (kept prototype unchanged)
void mergeSort(long* array, int len) {
    if (len <= 1)
        return;

    mergeSortRecursive(array, 0, len - 1);
}
