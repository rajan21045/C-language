/* 
Write a C program using a structure to read the records of 20 students 
with the following details: roll_number, name, address, and marks.
Display the records of students who have obtained more than 70 marks.
*/

#include <stdio.h>

#define MAX_STUDENTS 20  // Define the maximum number of students allowed

// Define a structure to store student information
struct students {
    int roll_numbers;       // Student's roll number
    char name[50];          // Student's name
    char address[50];       // Student's address
    float marks;            // Student's marks
};

int main() {
    struct students std[MAX_STUDENTS];  // Array to store student records
    int i, n;

    // Prompt user to enter the number of students
    printf("Enter the number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &n);

    // Validate the number of students
    if (n > MAX_STUDENTS || n <= 0) {
        printf("Invalid number of students.\n");
        return 1;  // Exit if input is invalid
    }

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        // Input roll number
        printf("Roll Number : ");
        scanf("%d", &std[i].roll_numbers);

        // Input name
        printf("Name : ");
        scanf(" %[^\n]", std[i].name);  // Read full line with spaces

        getchar(); // Clear newline left in buffer

        // Input address
        printf("Address : ");
        scanf(" %[^\n]", std[i].address);  // Read full line with spaces

        // Input marks
        printf("Marks : ");
        scanf("%f", &std[i].marks);
    }

    printf("\n");

    // Display students who scored more than 70 marks
    printf("Displaying The Students Details Who Have Obtained More Than 70 Marks:\n");

    for (i = 0; i < n; i++) {
        if (std[i].marks > 70) {  // Filter condition
            printf("Student %d\n", i + 1);
            printf("ID: %d\n", std[i].roll_numbers);
            printf("Name: %s\n", std[i].name);
            printf("Address: %s\n", std[i].address);
            printf("Marks: %.2f\n\n", std[i].marks);
        }
    }

    return 0;
}
