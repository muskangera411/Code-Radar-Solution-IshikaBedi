#include <stdio.h>

int main() {
    int n;
    int multiply=1;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        multiply=n*i;
    }
    printf("%d*%d=%d\n",n,i,multiply);
    return 0;
}