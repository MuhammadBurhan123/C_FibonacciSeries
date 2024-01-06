#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        printf("%d", first);

        next = first + second;
        first = second;
        second = next;

        if (i < n - 1) {
            printf(", ");
        }
    }

    return 0;
}
