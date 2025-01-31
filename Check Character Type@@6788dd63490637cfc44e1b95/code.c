#include <stdio.h>

int main() {
    char ch;
    if(digit(ch)){
        printf("Digit\n");
    }
    else if(ch>='a' && ch<='z'){
    if (ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'){printf("Vowel\n");}
    else{printf("Consonant");}}

    else{printf("Special character");}
    return 0;
}
