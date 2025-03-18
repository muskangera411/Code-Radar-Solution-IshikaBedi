#include <stdio.h>

void fibonacciSeries(int n);  // Function prototype

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    fibonacciSeries(n);  // Function call

    return 0;
}

void fibonacciSeries(int n) {  // Function definition
    int a = 0, b = 1, next;
    printf("Fibonacci Series: %d %d ", a, b);
    
    for (int i = 2; i < n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
}

