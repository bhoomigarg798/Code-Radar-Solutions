#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch=='a'|| ch=='i' || ch=='e'|| ch=='o' || ch=='u'){
        printf("Vowel");
        if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
            printf("Digit");
        }
    }
    else {
        printf("Consonant");
    }
    return 0;
}