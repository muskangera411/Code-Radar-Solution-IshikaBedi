#include <stdio.h>

void printNumberPyramid(int n) {
    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= i; j++) {  // Loop for numbers in each row
            printf("%d ", j);
        }
        printf("\n");  // Move to the next line after each row
    }
}

int main() {
    int n;
   
    scanf(" %d", &n);
    printNumberPyramid(n);
    return 0;
}
