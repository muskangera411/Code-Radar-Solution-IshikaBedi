// Your code here...
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d", &a);
    if(a%1==0 && a%a==0 && (a%2==0 || a%3==0) && a!=2)
        printf("Not Prime");
    else 
        printf("Prime");
    return 0;
}