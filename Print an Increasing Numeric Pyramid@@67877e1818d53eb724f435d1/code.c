#include <stdio.h>

void printNumberPyramid(int n) {
    for (int i = 1; i <= n; i++) {  // Loop for rows
        // Print leading spaces
        for (int space = 1; space <= n - i; space++) {
            printf(" ");  // Print single space for alignment
        }
        
        // Print numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");  // Move to the next line after each row
    }
}

int main() {
    int n;
    scanf("%d", &n);  // Read input
    printNumberPyramid(n);
    return 0;
}
