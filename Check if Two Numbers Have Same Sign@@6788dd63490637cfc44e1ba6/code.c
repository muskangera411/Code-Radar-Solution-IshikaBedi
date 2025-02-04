#include <stdio.h>

int main() {
    int a,b;
    sacnf("%d%d",&a,&b );
    if((a>0 && b>0)||(a<0 && b<0)){
    printf("Same sign");}
    else{
        printf("Different sign");
    }
    return 0;
}