#include <stdio.h>

void fibonacciSeries(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci Series: %d %d ", a, b);

    for (int i = 2; i < n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
}

int main() {  // Ensure this is the ONLY main() function in your file
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Please enter a number greater than or equal to 2.");
    } else {
        fibonacciSeries(n);
    }

    return 0;
}
