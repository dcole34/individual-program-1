#include <stdio.h>
#include "header.h"


void insertIntoList(int value, int list[], int *size) { // Inserts value into the list
    int i = *size - 1;
    
    while (i >= 0 && list[i] > value) { // Moves contents to make room for new number
        list[i + 1] = list[i];
        i--;
    }
    
    list[i + 1] = value; // Inserts the new number
    (*size)++;

}

void printContents(int size, const int array[]) { // Prints the contents of array

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]); // Prints each content in  array
    }

    printf("\n");

}

