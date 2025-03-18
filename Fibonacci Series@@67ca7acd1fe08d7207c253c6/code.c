// Your code here...
#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci Series: %d %d ", a, b);

    for (int i = 2; i < n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Enter a number greater than or equal to 2.");
    } else {
        fibonacci(n);
    }
    
    return 0;
}
