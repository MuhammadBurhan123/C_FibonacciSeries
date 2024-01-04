#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    // Get user input for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display the Fibonacci series
    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        printf("%d", first);

        // Calculate the next term in the series
        next = first + second;
        first = second;
        second = next;

        // Print comma and space if it's not the last term
        if (i < n - 1) {
            printf(", ");
        }
    }

    return 0;
}
