/*
Write a C program to count vowels and consonants in a string.


*/


#include <stdio.h>  // Include standard input/output library 

int main() {
    char str[100];             // Array to store the input string
    int vowels = 0, consonants = 0;  // Counters for vowels and consonants
    int i;                     // Loop index

    // Ask the user to enter a string
    printf("Enter a string: ");
    gets(str);  // Read string input (Note: unsafe, but simple for learning)

    // Loop through each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];  // Get the current character

        // Check if the character is a vowel (both lowercase and uppercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;  // Increment vowel counter
        }
        // Check if the character is an alphabet letter (consonant)
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;  // Increment consonant counter
        }
    }

    // Print the result
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;  // End of program
}