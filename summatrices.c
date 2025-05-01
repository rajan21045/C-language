/* Write a program in c to calculate the sum of two 3*3 matrices */

#include <stdio.h>

int main() {

    // Declaring the first matrix to store elements of the first 3x3 matrix
    int arr[3][3];

    // Declaring the second matrix to store elements of the second 3x3 matrix
    int arr2[3][3];

    // Declaring a matrix to store the sum of the above two matrices
    int sum[3][3];

    int i, j; // Loop counters

    // Prompting user to enter elements for the first matrix
    printf("Entering Into Matrix First \n");
    printf("Enter The Elements In The First Matrix (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]); // Reading element into arr[i][j]
        }
    }

    printf("\n");

    // Prompt after first matrix input
    printf("Thank You For Entering The Elements In First Matrix.\n");
    printf("Now, Entering Into Matrix Second\n");

    // Prompting user to enter elements for the second matrix
    printf("Enter The Elements In The Second Matrix (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr2[i][j]); // Reading element into arr2[i][j]
        }
    }

    // Performing matrix addition and storing result in sum[i][j]
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    // Printing the resulting sum matrix
    printf("\nThe Sum of Two Matrices is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]); // Printing each element with a space
        }
        printf("\n"); // Newline after each row
    }

    return 0; // Indicating successful program termination
}

