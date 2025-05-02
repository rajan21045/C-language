/*
What is recursive function? Write a C program to print the Fibonacci series up to n terms using recursion.

A recursive function is a function that solves a problem by solving smaller instances of the same problem.

The Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1. The series goes: 0, 1, 1, 2, 3, 5, 8, 13, 21, etc.

*/

#include <stdio.h> // Include standard input-output library
int fibo(int n){ // Function to calculate Fibonacci number using recursion
    
    if(n==0 || n==1){
        return n; // Base case: if n is 0 or 1, return n itself
    }
    else{
        return fibo(n-1)+fibo(n-2); // Recursive case: return the sum of the two preceding Fibonacci numbers 
    }
}


int main() {
    int n, i;
    printf("Enter the number of terms in the Fibonacci series: "); // Prompt user for input 
    scanf("%d", &n); // Read the number of terms from user
    if (n <= 0) { // Check if the input is valid (greater than 0)

        printf("Please enter a positive integer.\n"); // Display error message if invalid
        return 1; // Exit the program with an error code
    }

    
    fibo(n); // Call the Fibonacci function to calculate the series

    printf("Fibonacci series up to %d terms:\n", n);    // Display the number of terms
    // Loop to print Fibonacci series
    for(i=0; i<n; i++){ // Loop through each term

        printf("%d ", fibo(i));
        /* Call the recursive function to get Fibonacci number. Print the Fibonacci number followed 
        by a space to separate the numbers from each other and make it more readable by the user
        */ 
    }
    
    return 0;
}