#include <stdio.h>
#include "insertion_sort.h"

/*
    Function: insertionSort

    This function sorts the array step by step.
    Idea:
    We gonna assume the first element is already sorted.
    Then we gotta pick the next element and place it in the correct spot.
    To do that, we shift bigger elements to the right.

    It’s like arranging cards in your hands.
*/
void insertionSort(char arr[], int n) {
    int i, j;
    char key;

    // Start from the second element because first is already "sorted"
    for (i = 1; i < n; i++) {
        key = arr[i];   // This is the element we want to place correctly
        j = i - 1;

        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // shift right
            j--;
        }

        
          //  Now we've found the correct position for 'key',
        //    so we gotta insert it here.
        
        arr[j + 1] = key;
    }
}


void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");  // move to next line after printing
}