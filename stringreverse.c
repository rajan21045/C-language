/*
Write a C program to reverse a string.
*/


#include <stdio.h> // Header for standard input/output functions
#include<stdlib.h> // Header for general utility functions
#include<string.h>  // Header for string handling functions

// Function to reverse a given string in-place
void rev(char* str)
{
    char t;     // Temporary variable for swapping characters
    int l=0;   // Left index starts from the beginning of the string
    int r = strlen(str) -1;     // Right index starts from the end of the string


    // Loop until the left index is less than the right index
    while (l<r)
    {

         // Swap the characters at left and right indices
        t = str[l];
        str[l] = str[r];
        str[r] = t;

        // Move the indices towards the center
        l++;
        r--;
    }
    
}

int main() {

     // Declare and initialize a string
    char str[] = "Rajan";

    // Print the original string
    printf("The Original String Is %s \n",str);

    // Call the reverse function
    rev(str);


     // Print the reversed string
    printf("The Reverse String Is %s", str);
    
    return 0;       // Indicate successful execution
}