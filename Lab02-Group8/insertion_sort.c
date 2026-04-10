#include <stdio.h>
#include "insertion_sort.h"

/*
    This function sorts the array using insertion sort.

    Simple idea:
    We go element by element and place each one
    in its correct position among the already sorted part.
*/
void insertionSort(char arr[], int n) {
    int i, j;
    char key;

    for (i = 1; i < n; i++) {
        key = arr[i];      // element we want to position
        j = i - 1;

        // shift elements that are bigger than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // place key in the right spot
        arr[j + 1] = key;
    }
}

/*
    Just prints the array in one line
*/
void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}