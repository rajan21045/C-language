/*

Write a program to generate the following pattern using loops: 

1
1 1
1 1 1
1 1 1 1
1 1 1 1 1

*/


#include <stdio.h>// Include the standard input-output library for using printf and scanf functions
#include <stdlib.h> // Include the standard library for using exit function

int main() { // Main function where the program execution starts
    int rows; // Variable to store the number of rows for the pattern
    printf("Enter the number of rows: "); // Prompt the user to enter the number of rows for the pattern
    
    scanf("%d", &rows);  // Read the number of rows from the user
    for(int i = 1; i <= rows; i++) { // Loop to iterate through each row from 1 to the number of rows
        for(int j = 1; j <= i; j++) { // Loop to print the number of columns in each row
                printf("1 \t"); // Print 1 for each column in the row
            } 
        printf("\n"); // Move to the next line after printing all columns in the current row
    }

    // Print a message indicating the pattern has been printed successfully. This is optional and can be removed if not needed
    printf("The pattern is printed successfully.\n");  
    return 0; // Return 0 to indicate successful completion of the program
}