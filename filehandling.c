#include <stdio.h>

int main() {
    FILE *file, *oddFile, *evenFile;
    int number;

    // Writing to number.txt
    file = fopen("D:\\number.txt", "w");
    if (file == NULL) {
        printf(" Error opening number.txt for writing!\n");
        return 1;
    }

    printf("Enter 100 numbers:\n");
    for (int i = 1; i <= 100; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        fprintf(file, "%d\n", number); // Save only the number
    }
    fclose(file);

    // Reading from number.txt and writing odd/even numbers
    file = fopen("D:\\number.txt", "r");
    oddFile = fopen("D:\\odd.txt", "w");
    evenFile = fopen("D:\\even.txt", "w");

    if (file == NULL || oddFile == NULL || evenFile == NULL) {
        printf(" Error opening one of the files for reading/writing!\n");
        return 1;
    }

    printf("\nClassifying numbers into odd.txt and even.txt...\n");

    int count = 1;
    while (fscanf(file, "%d", &number) != EOF) {
        if (number % 2 == 0) {
            fprintf(evenFile, "%d. Even Number: %d\n", count, number);
            printf("%d is Even\n", number);
        } else {
            fprintf(oddFile, "%d. Odd Number: %d\n", count, number);
            printf("%d is Odd\n", number);
        }
        count++;
    }

    fclose(file);
    fclose(oddFile);
    fclose(evenFile);

    printf("\n Numbers saved to odd.txt and even.txt successfully!\n");

    return 0;
}
