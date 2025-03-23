#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    double x;

    // Input data
    printf("Enter the value of a (integer): ");
    scanf_s("%d", &a);

    printf("Enter the value of b (integer): ");
    scanf_s("%d", &b);

    // Check for valid input
    if (a - b * b < 0 || a * b < 0) {
        printf("Error: radicand is negative.\n");
        return 1; // Return error code
    }

    // Calculate the value of function x
    x = sqrt(a - pow(b, 2)) + sqrt(a * b);

    // Output the result
    printf("The value of function x: %.2lf\n", x);

    return 0;
}