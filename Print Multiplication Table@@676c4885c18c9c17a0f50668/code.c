#include <stdio.h>

int main() {
    int n;
    int multiply=0;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        multiply*=i;
    }
    printf("%d*%d=%d",n,i,multiply);
    return 0;
}