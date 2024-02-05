// Daniel Coleman 
// ECE.4811 - Operating Systems
// Michael Geiger
// Indiviual Program 1

#include <stdio.h>
#include "header.h"

int main(int argumentCount, char **argumentValues) {
    
    if (argumentCount != 2) return 1;

    FILE *userInputFile;
    userInputFile = fopen("file1.txt", "r"); // "r" stands for "read file" and open file

    int number;

    int queue[100]; // Queue
    int stack[100]; // Stack
    int list[100]; // List
    int queuefront = 0;
    int stackpointer = 0;
    int listlength = 0;

    while (fscanf(userInputFile, "%d", &number) == 1) {
        
        queue[queuefront++] = number;
        stack[stackpointer++] = number;
        insertIntoList(list, &listlength, number); // Insert into simulated queue, stack, and linked list
    }

    
    fclose(userInputFile); // Close input file

    

    printf("QUEUE CONTENTS: "); // Outputs the numbers of queue contents
    
    printContents(queue, queuefront);

    printf("STACK CONTENTS: "); // Outputs the numbers of stack contents
    
    printContents(stack, stackpointer);

    printf("LIST CONTENTS: "); // Outputs the numbers of list contents
   
    printContents(list, listlength);

    return 0;

}
