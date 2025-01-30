#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch=='a'|| ch=='i' || ch=='e'|| ch=='o' || ch=='u'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}