#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "insertion_sort.h"

int main() {
    int n;

    printf("Enter number of characters: ");
    scanf("%d", &n);

    // basic check so program doesn't break
    if (n <= 0) {
        printf("Invalid size!\n");
        return 1;
    }

    
    char* arr = (char*)malloc(n * sizeof(char));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d characters:\n", n);

    for (int i = 0; i < n; i++) {

        // space before %c avoids input issues
        scanf(" %c", &arr[i]);
    }

    printf("\nOriginal array:\n");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("\nSorted array:\n");
    printArray(arr, n);

    free(arr);  // clean up memory

    return 0;
}