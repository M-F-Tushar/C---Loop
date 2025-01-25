/*Write a program that reads an integer N > 3 and calculates the result of the expression R1 = 1/1 − 1/2 + 1/3 − 1/4 + … 1/N. The program should force the user
to enter an integer greater than 3.*/
#include <stdio.h>

int main() {
    int num, i;
    double val = 0;  // Initialize the result to 0

    // Ask the user for input until they enter a number greater than 3
    do {
        printf("Enter a number greater than 3: ");
        scanf("%d", &num);
    } while (num <= 3);  // Repeat if the number is not greater than 3

    // Calculate the alternating series
    for (i = 1; i <= num; i++) {
        if (i % 2 == 1) {
            // For odd i, add 1/i
            val += 1.0 / i;
        } else {
            // For even i, subtract 1/i
            val -= 1.0 / i;
        }
    }

    // Display the result
    printf("Result = %.6f\n", val);  // Print the result with 6 decimal places

    return 0;
}

