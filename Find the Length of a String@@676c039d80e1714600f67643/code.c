#include <stdio.h>
int main() {
    char s[100];
    fgets(s,100,stdin);
    int count =0;
    for (int i=0; s[i]!='\0';i++) {
        count+=1;
    }
    printf("%d",count);
    return 0;
}