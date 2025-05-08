#include <stdio.h>
#include <string.h>  // Include string library for string manipulation

int main() {
    char st[100];  // Array to store the input string
    printf("Enter a string: ");
    fgets(st, sizeof(st), stdin);  // Read string input

    // Remove newline character
    st[strcspn(st, "\n")] = '\0';

    // Make a copy of the original string
    char original[100];
    strcpy(original, st);

    // Reverse the string
    strrev(st);  // Only works in non-standard compilers like Turbo C

    // Compare reversed with original
    if (strcmp(st, original) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
