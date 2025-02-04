#include <stdio.h>

int main() {
    char a;
    scanf(" %c",&a);
    if(a=='R'){
        printf("Stop");
    }
    else if(a=='G'){
        printf("Go");
    }
    else if(a=='Y'){
        printf("Slow Down");
    }
    else{
        print("Invalid input");
    }
    return 0;
}